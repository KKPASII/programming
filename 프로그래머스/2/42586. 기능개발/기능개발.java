import java.util.*;

class Solution {
    public int[] solution(int[] progresses, int[] speeds) {
        ArrayList<Integer> answer = new ArrayList<>();
        int[] days = new int[progresses.length];
        
        for (int i = 0; i < progresses.length; i++) {
            int prog = progresses[i];
            int speed = speeds[i];
            
            int need = 100 - prog;
            int day = need % speed != 0 ? need / speed + 1 : need / speed;
            days[i] = day;
        }
        
        int together = 1;
        int prevDay = days[0];
        
        for (int i = 1; i < progresses.length; i++) {
            if (prevDay >= days[i]) {
                together++;
            }
            else {
                answer.add(together);
                together = 1;
                prevDay = days[i];
            }
        }
        
        answer.add(together);
        
        return answer.stream()
                .mapToInt(Integer::intValue)
                .toArray();
    }
}