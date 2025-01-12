import java.util.StringTokenizer;

class Solution {
    public String solution(String s) {
        int minValue = Integer.MAX_VALUE;
        int maxValue = Integer.MIN_VALUE;
        StringTokenizer st = new StringTokenizer(s);
        
        while (st.hasMoreTokens()) {
            int num = Integer.parseInt(st.nextToken());
            minValue = Math.min(minValue, num);
            maxValue = Math.max(maxValue, num);
        }
        return minValue + " " + maxValue;
    }
}