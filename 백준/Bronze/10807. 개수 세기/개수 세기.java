import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.StringTokenizer;
import java.io.IOException;

public class Main {
	public static void main(String[] args) throws IOException {
		BufferedReader bf = new BufferedReader(new InputStreamReader(System.in));
		int amount = Integer.parseInt(bf.readLine());
		int[] arr = new int[amount];
		
		StringTokenizer st = new StringTokenizer(bf.readLine());
		for (int i = 0; i < amount; i++) {
			arr[i] = Integer.parseInt(st.nextToken());
		}
		
		int target = Integer.parseInt(bf.readLine());
		int answer = 0;
		for (int i = 0; i < amount; i++) {
			if (arr[i] == target) {
				answer++;
			}
		}
		System.out.print(answer);
	}
}