import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.text.DecimalFormat;
import java.util.StringTokenizer;

public class Main {
    static int n, dirSize = 4;
    static double[] dirProbability;
    static double answer;
    static int[] dx = {1, -1, 0, 0};
    static int[] dy = {0, 0, -1, 1};
    static boolean[][] visited = new boolean[29][29];

    public static void dfs(int depth, int x, int y, double probability) {
        if (depth == n) {
            answer += probability;
            return;
        }
        for (int i = 0; i < dirSize; i++) {
            if (dirProbability[i] == 0) continue;
            int nx = x + dx[i];
            int ny = y + dy[i];
            if (!visited[nx][ny]) {
                visited[nx][ny] = true;
                dfs(depth + 1, nx, ny, probability * dirProbability[i]);
                visited[nx][ny] = false;
            }
        }
    }

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        n = Integer.parseInt(st.nextToken());
        dirProbability = new double[dirSize];

        for (int i = 0; i < dirSize; i++) {
            dirProbability[i] = Double.parseDouble(st.nextToken()) * 0.01;
        }

        visited[14][14] = true;
        dfs(0, 14, 14, 1.0);

        DecimalFormat df = new DecimalFormat("0.######################");
        System.out.println(df.format(answer));
    }
}