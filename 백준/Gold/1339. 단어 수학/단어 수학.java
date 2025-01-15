import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.*;
public class Main {
    static int n;
    static String[] strArr;
    static Map<Character, Integer> freqMap = new HashMap<>();
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        n = Integer.parseInt(br.readLine());
        strArr = new String[n];
        for (int i = 0; i < n; i++) {
            strArr[i] = br.readLine();
            int len = strArr[i].length();
            for (int j = 0; j < len; j++) {
                char ch = strArr[i].charAt(j);
                int weight = (int) Math.pow(10, len - j - 1);
                freqMap.put(ch, freqMap.getOrDefault(ch, 0) + weight);
            }
        }
        ArrayList<Character> sortedKeys = new ArrayList<>(freqMap.keySet());
        sortedKeys.sort((o1, o2) -> freqMap.get(o2) - freqMap.get(o1));
        Map<Character, Integer> numMap = new HashMap<>();
        int num = 9;
        for (char key : sortedKeys) {
            numMap.put(key, num);
            num--;
        }
        int totalSum = 0;
        for (String word : strArr) {
            int wordSum = 0;
            for (char ch : word.toCharArray()) {
                wordSum = (wordSum * 10) + numMap.get(ch);
            }
            totalSum += wordSum;
        }
        System.out.print(totalSum);
    }
}