import java.util.*;

class Solution {
    public int solution(String[] want, int[] number, String[] discount) {
        
        HashMap<String, Integer> mine = new HashMap<>();

        for (int i = 0; i < want.length; i++) {
            mine.put(want[i], number[i]);
        }
        
        int cnt = 0;
        
        for (int i = 0; i <= discount.length - 10; i++) {
            HashMap<String, Integer> market = new HashMap<>();
            
            for (int j = i; j < i + 10; j++) {
                String p = discount[j];
                market.put(p, market.getOrDefault(p, 0) + 1);
            }
            
            boolean possible = true;
            
            for (String p : want) {
                if (market.getOrDefault(p, 0) < mine.get(p)) {
                    possible = false;
                    break;
                }
            }
            
            if (possible) {
                cnt++;
            }
        }
        
        return cnt;
    }
}