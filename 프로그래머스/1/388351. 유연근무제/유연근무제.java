class Solution {
    public int solution(int[] schedules, int[][] timelogs, int startday) {
        int answer = 0;
        int len = schedules.length;
        
        int[][] scheds = new int[len][2];
        
        for (int i = 0; i < len; i++) {
            scheds[i][1] = schedules[i] % 100;
            scheds[i][0] = schedules[i] / 100;
        }
        
        for (int i = 0; i < timelogs.length; i++) {
            boolean success = true;
            
            for (int j = 0; j < 7; j++) {
                int day = (startday + j - 1) % 7 + 1;
                if (day == 6 || day == 7) {
                    continue;
                }
                
                int mm = timelogs[i][j] % 100;
                int hh = timelogs[i][j] / 100;
                int total = hh * 60 + mm;
                
                int target = scheds[i][0] * 60 + scheds[i][1];
                
                if (total > target + 10) {
                    success = false;
                    break;
                }
            }
            
            if (success) {
                answer++;
            }
        }
        
        return answer;
    }
}