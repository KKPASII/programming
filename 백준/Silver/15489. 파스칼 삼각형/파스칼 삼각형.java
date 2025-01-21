import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main {
    static int r, c, w;
    
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        r = Integer.parseInt(st.nextToken());
        c = Integer.parseInt(st.nextToken());
        w = Integer.parseInt(st.nextToken());

        int[][] pascal = new int[r+w][r+w];
        pascal[0][0] = 1;
        for (int i = 1; i < r+w; i++) {
            pascal[i][0] = 1;
            for (int j = 1; j < i; j++) {
                pascal[i][j] = pascal[i-1][j-1] + pascal[i-1][j];
            }
            pascal[i][i] = 1;
        }

        int sum = 0;
        for (int i = 0; i < w; i++) {
            for (int j = 0; j < i+1; j++) {
                sum += pascal[r-1+i][c-1+j];
            }
        }
        System.out.print(sum);
    }
}