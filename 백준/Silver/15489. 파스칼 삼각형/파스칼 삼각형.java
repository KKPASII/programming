import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main {
    static int r, c, w;
    static int[][] pascal = new int[31][31];

    public static void fillTriangle() {
        for (int i = 0; i < 31; i++) {
            pascal[i][0] = 1;
            pascal[i][i] = 1;
            for (int j = 1; j < i; j++) {
                pascal[i][j] = pascal[i-1][j-1] + pascal[i-1][j];
            }
        }
    }

    public static int calcSum() {
        int sum = 0;
        for (int i = 0; i < w; i++) {
            for (int j = 0; j < i+1; j++) {
                sum += pascal[r-1+i][c-1+j];
            }
        }
        return sum;
    }

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        r = Integer.parseInt(st.nextToken());
        c = Integer.parseInt(st.nextToken());
        w = Integer.parseInt(st.nextToken());

        fillTriangle();
        int result = calcSum();
        System.out.print(result);
    }
}