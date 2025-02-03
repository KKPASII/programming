import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.Collections;
import java.util.StringTokenizer;

public class Main {
    static int n, c;
    static ArrayList<Long> sum1 = new ArrayList<>();
    static ArrayList<Long> sum2 = new ArrayList<>();

    static void getSubsetSums(ArrayList<Long> arr, long sum, int idx,  ArrayList<Long> result) {
        if (idx == arr.size()) {
            result.add(sum);
            return;
        }
        getSubsetSums(arr,  sum, idx+1, result);
        getSubsetSums(arr, sum + arr.get(idx),idx + 1, result);
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
        ArrayList<Long> w1 = new ArrayList<>();
        ArrayList<Long> w2 = new ArrayList<>();
        for (int i = 0; i < mid; i++)
            w1.add(Long.parseLong(st.nextToken()));
        for (int i = 0; i < n-mid; i++)
            w2.add(Long.parseLong(st.nextToken()));

        getSubsetSums(w1, 0, 0, sum1);
        getSubsetSums(w2, 0, 0, sum2);
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