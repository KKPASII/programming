class Solution {
    public int solution(int n) {
        int target = calOne(n++);
        
        while (true) {
            if (target == calOne(n)) {
                return n;
            }
            n++;
        }
    }
    
    public int calOne(int num) {
        int one = 0;
        while (num > 0) {
            if ((num & 1) == 1) {
                one++;
            }
            num >>= 1;
        }
        return one;
    }
}