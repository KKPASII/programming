import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.StringTokenizer;

public class Main {
    static int n, k;
    static int[] dp;

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        n = Integer.parseInt(st.nextToken());
        k = Integer.parseInt(st.nextToken());
        int[] coins = new int[n];
        dp = new int[k+1];
        Arrays.fill(dp, k + 1);
        dp[0] = 0;
        
        for (int i = 0; i < n; i++)
            coins[i] = Integer.parseInt(br.readLine());
        
        for (int coin : coins)
            for (int i = coin; i <= k; i++)
                dp[i] = Math.min(dp[i], dp[i - coin] + 1);
        
        System.out.println(dp[k] == k + 1 ? -1 : dp[k]);
        // coin : 1
        // [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15]
        // coin : 5
        // [0, 1, 2, 3, 4, 1, 6, ...]
        // [0, 1, 2, 3, 4, 1, 2, ...]
        // [0, 1, 2, 3, 4, 1, 2, 3, 4, 5, 6, ...]
        // [0, 1, 2, 3, 4, 1, 2, 3, 4, 5, 2, 3, 4, 5, 6, 3]
        // coin : 12
        // [0, 1, 2, 3, 4, 1, 2, 3, 4, 5, 2, 3, 1, 2, 3, 3]
    }
}