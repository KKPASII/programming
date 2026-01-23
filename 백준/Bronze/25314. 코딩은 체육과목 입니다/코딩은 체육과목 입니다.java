import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;

public class Main {
	public static void main(String[] args) throws IOException {
		BufferedReader bf = new BufferedReader(new InputStreamReader(System.in));
		String s = bf.readLine();
		int fixed_amount = 4;
		int amount = Integer.parseInt(s)/fixed_amount;
		
		for (int i = 0; i < amount; i++) {
			System.out.print("long ");
		}
		System.out.print("int");
	}
}