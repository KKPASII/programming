import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main {
    static int N;
    static int[][] board;
    static boolean[] selected;
    static int minDiff = Integer.MAX_VALUE;

    public static void Sum() {
        int startTeam = 0;
        int linkTeam = 0;

        for (int i = 0; i < N-1; i++) {
            for (int j = i + 1; j < N; j++) {
                if (selected[i] && selected[j]) {
                    startTeam += board[i][j] + board[j][i];
                }
                else if (!selected[i] && !selected[j]) {
                    linkTeam += board[i][j] + board[j][i];
                }
            }
        }

        int diff = Math.abs(startTeam - linkTeam);
        minDiff = Math.min(diff, minDiff);
    }

    public static void backtrack(int idx, int k) {
        if (k == N/2) {
            Sum();
            return;
        }

        for (int i = idx; i < N; i++) {
            if (!selected[i]) {
                selected[i] = true;
                backtrack(i + 1, k + 1);
                selected[i] = false;
            }
        }
    }

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer row;
        String str = br.readLine();
        N = Integer.parseInt(str);
        board = new int[N][N];
        selected = new boolean[N];

        for (int i = 0; i < N; i++) {
            row = new StringTokenizer(br.readLine());
            for (int j = 0; j < N; j++) {
                board[i][j] = Integer.parseInt(row.nextToken());
            }
        }

        backtrack(0, 0);
        System.out.println(minDiff);
    }
}