class Solution {
    public int solution(int n) {
        int fib = 1234567;
        int f0 = 0;
        int f1 = 1;
        int answer = 0;
        for (int i = 2; i <= n; i++) {
            answer = (f0 + f1) % fib;
            f0 = f1;
            f1 = answer;
        }
        
        return answer;
    }
}