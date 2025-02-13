import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.StringTokenizer;

public class Main {
    static int n, k;
    static int[] small, big;
    static int[] dp;
    static int answer = Integer.MAX_VALUE;

    public static void track(int idx, boolean usedSuperJump, int energy) {
        if (idx == n) {
            answer = Math.min(answer, energy);
            return;
        }
        if (idx > n) return;

        track(idx + 1, usedSuperJump, energy + small[idx]);

        if (idx + 2 <= n) {
            track(idx + 2, usedSuperJump, energy + big[idx]);
        }

        if (!usedSuperJump && idx + 3 <= n) {
            track(idx + 3, true, energy + k);
        }
    }

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        n = Integer.parseInt(st.nextToken());

        small = new int[n];
        dp = new int[n];
        big = new int[n];

        for (int i = 1; i < n; i++) {
            st = new StringTokenizer(br.readLine());
            small[i] = Integer.parseInt(st.nextToken());
            big[i] = Integer.parseInt(st.nextToken());
        }
        k = Integer.parseInt(br.readLine());

        Arrays.fill(dp, Integer.MAX_VALUE);

        track(1, false, 0);

        System.out.println(answer);
    }
}