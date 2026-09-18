import java.util.*;

class Solution {
    public int solution(int k, int[] tangerine) {
        int answer = 0;
        
        Map<Integer, Integer> map = new HashMap<>();
        for (int t : tangerine) {
            map.put(t, map.getOrDefault(t, 0) + 1);
        }
        
        List<Integer> tangerineList = new ArrayList<>(map.values());
        tangerineList.sort(Collections.reverseOrder());
        
        for (int t : tangerineList) {
            k -= t;
            answer++;
            if (k <= 0) {
                return answer;
            }
        }
        return answer;
    }
}