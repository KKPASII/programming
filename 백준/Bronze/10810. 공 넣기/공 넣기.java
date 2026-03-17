import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader bf =new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(bf.readLine());

        int basket = Integer.parseInt(st.nextToken());
        int cnt = Integer.parseInt(st.nextToken());

        int[] baskets = new int[basket+1];

        for (int i = 0; i < cnt; i++) {
            st = new StringTokenizer(bf.readLine());
            int x = Integer.parseInt(st.nextToken());
            int y = Integer.parseInt(st.nextToken());
            int z = Integer.parseInt(st.nextToken());

            for (int j = x; j <= y; j++) {
                baskets[j] = z;
            }
        }

        StringBuilder sb = new StringBuilder();
        for (int i = 1; i <= basket; i++) {
            sb.append(baskets[i]).append(' ');
        }
        System.out.println(sb);
    }
}