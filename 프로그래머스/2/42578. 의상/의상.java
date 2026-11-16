import java.util.*;

class Solution {
    public int solution(String[][] clothes) {
        HashMap<String, Integer> map = new HashMap<>();
        
        for (String[] c : clothes) {
            String part = c[1];
            map.put(part, map.getOrDefault(part, 0) + 1);
        }
        
        int answer = 1;
        for (int cnt : map.values()) {
            answer *= (cnt + 1);
        }

        return answer - 1;
    }
}