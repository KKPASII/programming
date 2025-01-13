import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main {
    static int[] numSeq;
    static int n, s, cnt;
    public static void dfs(int idx, int sum) {
        if (sum == s) cnt++;
        if (idx == n) return;
        for (int i = idx; i < n; i++) {
            dfs(i + 1, sum + numSeq[i]);
        }
    }

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        n = Integer.parseInt(st.nextToken());
        s = Integer.parseInt(st.nextToken());
        numSeq = new int[n];
        st = new StringTokenizer(br.readLine());
        for (int i = 0; i < n; i++) {
            numSeq[i] = Integer.parseInt(st.nextToken());
        }
        dfs(0, 0);
        if (s == 0) cnt--;
        System.out.print(cnt);
    }
}