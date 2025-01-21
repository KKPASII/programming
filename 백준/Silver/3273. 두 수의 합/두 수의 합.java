import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.util.Arrays;
import java.util.StringTokenizer;

public class Main {
    public static void main(String[] args) throws IOException {
        int n, x;
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        n = Integer.parseInt(br.readLine());
        int[] numArr = new int[n];
        StringTokenizer st = new StringTokenizer(br.readLine());
        for (int i = 0; i < n; i++) {
            numArr[i] = Integer.parseInt(st.nextToken());
        }
        x = Integer.parseInt(br.readLine());
        Arrays.sort(numArr);

        int answer = 0;
        int left = 0, right = n-1;
        while (left < right) {
            int sum = numArr[left] + numArr[right];
            if (sum == x) {
                answer++;
                int leftNum = numArr[left];
                int rightNum = numArr[right];
                while (left < right && numArr[left] == leftNum) {
                    left++;
                }
                while (left < right && numArr[right] == rightNum) {
                    right--;
                }
            }
            else if (sum < x) {
                left++;
            }
            else {
                right--;
            }
        }
        System.out.print(answer);
    }
}