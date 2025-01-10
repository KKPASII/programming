import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.List;
import java.util.StringTokenizer;

public class Main {
    static int n;
    static int minValue = Integer.MAX_VALUE;
    static int maxValue = Integer.MIN_VALUE;
    static int[] arr;
    static int[] op;
    static int[] opArr;
    
    public static int calcMinMax(int[] opArr) {
        int sum = arr[0];
        for (int i = 0; i < opArr.length; i++) {
            switch(opArr[i]) {
                case 0: sum += arr[i+1];
                    break;
                case 1: sum -= arr[i+1];
                    break;
                case 2: sum *= arr[i+1];
                    break;
                case 3: sum /= arr[i+1];
                    break;
            }
        }
        return sum;
    }

    public static void dfs(int depth) {
        if (depth == n-1) {
            int result = calcMinMax(opArr);
            minValue = Math.min(minValue, result);
            maxValue = Math.max(maxValue, result);
            return;
        }
        for (int i = 0; i < 4; i++) {
            if (op[i] != 0) {
                opArr[depth] = i;
                op[i] -= 1;
                dfs(depth + 1);
                op[i] += 1;
            }
        }
    }

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st;
        n = Integer.parseInt(br.readLine());
        arr = new int[n];
        op = new int[4];
        opArr = new int[n-1];
        st = new StringTokenizer(br.readLine());
        for (int i = 0; i < n; i++) {
            arr[i] = Integer.parseInt(st.nextToken());
        }
        st = new StringTokenizer(br.readLine());
        for (int i = 0; i < 4; i++) {
            op[i] = Integer.parseInt(st.nextToken());
        }
        dfs(0);
        System.out.println(maxValue);
        System.out.println(minValue);
    }
}