import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.*;

public class Main {
    static int n, k;
    static int[] dir = {-1, 1}; //-1 1
    static final int RANGE_ABS = 100_100_000;

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        n = Integer.parseInt(st.nextToken());
        k = Integer.parseInt(st.nextToken());

        Queue<Integer> q = new LinkedList<>();
        boolean[] visited = new boolean[200_200_002]; // -1억 ~ 1억

        st = new StringTokenizer(br.readLine());
        for (int i = 0; i < n; i++) {
            int spot = Integer.parseInt(st.nextToken());
            visited[spot + RANGE_ABS] = true;
            q.add(spot);
        }

        long answer = 0;
        int cnt = 0; // cnt == k 이면 그만
        long dist = 0;

        while(!q.isEmpty()) {
            int size = q.size();
            for (int i = 0; i < size; i++) {
                int pos = q.poll();
                for (int j = 0; j < 2; j++) {
                    int next = pos + dir[j]; // 큐에 넣을 위치
                    if (!visited[next+RANGE_ABS]) {
                        visited[next+RANGE_ABS] = true;
                        q.add(next);
                        answer += dist + 1;
                        cnt++;
                        if (cnt == k) {
                            System.out.println(answer);
                            return;
                        }
                    }
                }
            }
            dist++;
        }

        System.out.print(answer);
    }
}