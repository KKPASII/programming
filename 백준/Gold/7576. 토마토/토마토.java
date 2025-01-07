import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;
import java.util.LinkedList;
import java.util.Queue;

public class Main {
    static int m;
    static int n;
    static int[][] board;
    static int[] dx = {0, 1, 0, -1};
    static int[] dy = {-1, 0, 1, 0};
    static int dir = 4;

    public static void printBorad() {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                System.out.print(board[i][j] + " ");
            }
            System.out.println();
        }
    }

    public static boolean checkRange(int row, int col) {
        if (row >= 0 && row < n && col >=0 && col < m)
            return true;
        return false;
    }

    public static int bfs() {
        Queue<int[]> q = new LinkedList<>();
        int days = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (board[i][j] == 1) {
                    q.add(new int[] {i, j});
                }
            }
        }
        
        while(!q.isEmpty()) {
            int size = q.size();
            boolean ripe = false;
            for (int i = 0; i < size; i++) {
                int[] ripeTomato = q.poll();
                for (int k = 0; k < dir; k++) {
                    int x = ripeTomato[0] + dx[k];
                    int y = ripeTomato[1] + dy[k];
                    if (checkRange(x, y) && board[x][y] == 0) {
                        board[x][y] = 1;
                        q.add(new int[] {x, y});
                        ripe = true;
                    }
                }
            }
            if (ripe) days++;
        }

        if (!allRipe()) return -1;

        return days;
    }

    public static boolean allRipe() {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (board[i][j] == 0) return false;
            }
        }
        return true;
    }

    public static void main(String[] args) throws IOException {
        int answer;
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String line = br.readLine();
        StringTokenizer st = new StringTokenizer(line);
        m = Integer.parseInt(st.nextToken());
        n = Integer.parseInt(st.nextToken());
        
        board = new int[n][m];

        for (int i = 0; i < n; i++) {
            StringTokenizer row = new StringTokenizer(br.readLine());
            for (int j = 0; j < m; j++) {
                board[i][j] = Integer.parseInt(row.nextToken());
            }
        }

        answer = bfs();
        System.out.println(answer);
    }
}