class Solution {
    public long solution(int n) {
        int m = 1234567;
        
        int[] step = new int[2001];
        step[0] = 0;
        step[1] = 1;
        step[2] = 2;
        
        for (int i = 3; i <= n; i++) {
            step[i] = (step[i - 1] + step[i - 2]) % m;
        }
        
        return step[n];
    }
}