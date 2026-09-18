import java.util.*;

class Solution {
    public int[] solution(int brown, int yellow) {
        int total = brown + yellow;
        int width = 0;
        int height = 0;
        
        for (int i = 1; i <= total; i++) {
            if (total % i == 0) {
                width = i;
                height = total / width;
                
                if (width >= height && (width - 2) * (height - 2) == yellow) {
                    return new int[]{width, height};
                }
            }
        }
        
        return new int[]{width, height};
    }
}