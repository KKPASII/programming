import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
    static int[] arr;
    static int N;
    static int answer = 0;

    public static boolean check(int curRow) {
        for (int i = 0; i < curRow; i++) {
            if (arr[curRow] == arr[i]) {
                return false;
            }
            else if(Math.abs(curRow-i) == Math.abs(arr[curRow]-arr[i])) {
                return false;
            }
        }
        return true;
    }

    public static void backtrack(int depth) {
        if (depth == N) {
            answer++;
            return;
        }

        for (int i = 0; i < N; i++) {
            arr[depth] = i;
            if (check(depth)) {
                backtrack(depth + 1);
            }
        }
    }

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String str = br.readLine();
        N = Integer.parseInt(str);
        arr = new int[N];

        backtrack(0);
        System.out.println(answer);
    }
}