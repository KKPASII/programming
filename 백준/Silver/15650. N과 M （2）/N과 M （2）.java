import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main {
    static int n,m;
    static int[] arr = new int[10];
    static boolean[] visited = new boolean[10];

    public static boolean isASC() {
        for (int i = m-1; i > 0; i--) {
            if (arr[i] < arr[i-1]) return false;
        }
        return true;
    }

    public static void backtrack(int k) {
        if (m == k && isASC()) {
            for (int i = 0; i < m; i++) {
                System.out.print(arr[i] + " ");
            }
            System.out.println();
        }

        for (int i = 1; i <= n; i++) {
            if (!visited[i]) {
                arr[k] = i;
                visited[i] = true;
                backtrack(k + 1);
                visited[i] = false;
            }
        }
    }

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String line = br.readLine();
        StringTokenizer st = new StringTokenizer(line);
        n = Integer.parseInt(st.nextToken());
        m = Integer.parseInt(st.nextToken());

        backtrack(0);
    }
}