import java.util.*;

class Solution {
    public int solution(int[] citations) {
        int n = citations.length;
        Arrays.sort(citations);
        
        for (int i = 0; i < n; i++) {
            int used = n - i;
            int notUsed = i;
            
            if (citations[i] >= used) {
                return used;
            }
        }
        
        return 0;
    }
}