import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
    static int N;
    static int[] v1;
    static int[] v2;
    static int[] v3;
    static int answer;

    public static void backtrack(int x) {
        if (x == N) {
            answer++;
            return;
        }

        for (int y = 0; y < N; y++) {
            if (v1[y] == 0 && v2[x+y] == 0 && v3[x-y+N] == 0) {
                v1[y] = 1;
                v2[x+y] = 1;
                v3[x-y+N] = 1;

                backtrack(x+1);

                v1[y] = 0;
                v2[x+y] = 0;
                v3[x-y+N] = 0;
            }
        }
    }

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String str = br.readLine();
        N = Integer.parseInt(str);
        v1 = new int[N];
        v2 = new int[2*N];
        v3 = new int[2*N];

        backtrack(0);
        System.out.println(answer);
    }
}
