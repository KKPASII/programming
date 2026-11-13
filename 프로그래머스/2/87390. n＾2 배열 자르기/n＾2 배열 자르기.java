import java.util.*;

class Solution {
    public int[] solution(int n, long left, long right) {
        int[] answer = new int[(int)(right - left + 1)];
        
        for (long i = left / n; i <= right / n; i++) {
            for (long j = 0; j < n; j++) {
                long index = i * n + j;

                if (index < left) continue;
                if (index > right) break;

                answer[(int)(index - left)] = (int) Math.max(i, j) + 1;
            }
        }
        
        return answer;
    }
}