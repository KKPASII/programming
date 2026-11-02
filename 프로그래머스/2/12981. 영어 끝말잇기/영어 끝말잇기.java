import java.util.*;

class Solution {
    public int[] solution(int n, String[] words) {

        Set<String> used = new HashSet<>();
        used.add(words[0]);
        
        char lastChar = words[0].charAt(words[0].length() - 1);
        
        for (int i = 1; i < words.length; i++) {
            if (lastChar != words[i].charAt(0) || used.contains(words[i])){
                int playerSeq = (i % n) + 1;
                int cnt = (i / n) + 1;
                
                return new int[]{playerSeq, cnt};
            }
            
            used.add(words[i]);
            lastChar = words[i].charAt(words[i].length() - 1);
        }

        return new int[]{0, 0};
    }
}