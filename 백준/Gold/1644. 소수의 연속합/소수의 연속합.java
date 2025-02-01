import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Main {
    public static boolean isPrime(int n) {
        for (int i = 2; i <= Math.sqrt(n); i++) {
            if (n % i == 0) {
                return false;
            }
        }
        return true;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int answer = 0;
        List<Integer> primes = new ArrayList<Integer>();

        if (n >= 2) {
            for (int i = 2; i <= n; i++) {
                if (isPrime(i)) {
                    primes.add(i);
                }
            }

            int left = 0;
            int right = 0;
            int size = primes.size();
            int sum = 0;

            while (right < size) {
                sum += primes.get(right);

                while (sum > n && left <= right) {
                    sum -= primes.get(left);
                    left++;
                }

                if (sum == n) {
                    answer++;
                }

                right++;
            }
        }

        System.out.print(answer);
    }
}