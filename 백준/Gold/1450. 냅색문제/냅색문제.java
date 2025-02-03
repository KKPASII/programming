import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.StringTokenizer;

public class Main {
    static int n, c;
    static ArrayList<Long> getSubsetSums(int[] arr) {
        ArrayList<Long> subsetSums = new ArrayList<>();
        int len = arr.length;
        for (int i = 0; i < (1 << len); i++) {
            long sum = 0;
            for (int j = 0; j < len; j++) {
                if ((i & (1 << j)) != 0) {
                    sum += arr[j];
                    if (sum > c) {
                        sum = -1;
                        break;
                    }
                }
            }
            if (sum != -1) subsetSums.add(sum);
        }
        return subsetSums;
    }

    static int search(ArrayList<Long> list, long key) {
        int left = 0, right = list.size();
        while (left < right) {
            int mid = (left + right) / 2;
            if (list.get(mid) <= key)
                left = mid + 1;
            else
                right = mid;
        }
        return left;
    }

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        n = Integer.parseInt(st.nextToken());
        c = Integer.parseInt(st.nextToken());

        st = new StringTokenizer(br.readLine());
        int mid = n/2;
        int[] w1 = new int[mid];
        int[] w2 = new int[n-mid];
        for (int i = 0; i < mid; i++)
            w1[i] = Integer.parseInt(st.nextToken());
        for (int i = 0; i < n-mid; i++)
            w2[i] = Integer.parseInt(st.nextToken());

        ArrayList<Long> sum1 = getSubsetSums(w1);
        ArrayList<Long> sum2 = getSubsetSums(w2);
        Collections.sort(sum2);
        
        long answer= 0;
        for (long s : sum1) {
            if (s > c) continue;
            long remaining = c - s;
            long cnt = search(sum2, remaining);
            answer += cnt;
        }
        System.out.println(answer);
    }
}