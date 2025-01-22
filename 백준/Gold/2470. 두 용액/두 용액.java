import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.StringTokenizer;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int minValue = Integer.MAX_VALUE;
        int n = Integer.parseInt(br.readLine());
        int[] solutions = new int[n];
        StringTokenizer st = new StringTokenizer(br.readLine());
        for (int i = 0; i < n; i++) {
            solutions[i] = Integer.parseInt(st.nextToken());
        }
        Arrays.sort(solutions);

        int left = 0;
        int right = n-1;
        int mid = (right+left)/2;
        int[] two = new int[2];

        while (left < right) {
            int sum = solutions[left] + solutions[right];
            int absSum = Math.abs(sum);

            if (absSum < minValue) {
                minValue = absSum;
                two[0] = solutions[left];
                two[1] = solutions[right];
            }

            if (sum < 0) {
                left++;
            }
            else if (sum > 0) {
                right--;
            }
            else {
                System.out.println(solutions[left] + " " + solutions[right]);
                return;
            }
        }
        System.out.print(two[0] + " " + two[1]);
    }
}