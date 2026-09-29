class Solution {
    public int solution(int[] arr) {
        
        int ans = lcm(arr[0], arr[1]);
        
        for (int i = 2; i < arr.length; i++) {
            ans = lcm(ans, arr[i]);
        }
        
        return ans;
    }
    
    public int gcd(int a, int b) {
        while (b != 0) {
            int temp = a % b;
            a = b;
            b = temp;
        }
        return a;
    }
    
    public int lcm(int a, int b) {
        return a * b / gcd(a, b);
    }
}