import java.io.*;
import java.util.Arrays;
import java.util.StringTokenizer;

public class Main {
	public static void main(String[] args) throws IOException {
		BufferedReader bf = new BufferedReader(new InputStreamReader(System.in)); //선언
		
		int n = Integer.parseInt(bf.readLine());
		int[] array = new int[n];
		
		StringTokenizer st = new StringTokenizer(bf.readLine());
		for (int i = 0 ;i < n; i++) {
			array[i] = Integer.parseInt(st.nextToken());
		}
		Arrays.sort(array);
		int sum = array[0];
		for (int i = 1 ;i < n; i++) {
			array[i] += array[i-1];
			sum += array[i];
		}
		System.out.println(sum);
	}
}