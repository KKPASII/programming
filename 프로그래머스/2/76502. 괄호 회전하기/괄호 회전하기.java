import java.util.*;

class Solution {
    public int solution(String s) {
        int len = s.length();
        char[] schar = s.toCharArray();
        int answer = 0;
        
        for (int i = 0; i < len; i++) {
            Stack<Character> stack = new Stack<>();
            boolean valid = true;
            
            for (int j = 0; j < len; j++) {
                char c = schar[(i + j) % len];

                if (c == '(' || c == '{' || c == '[') {
                    stack.push(c);
                } else {
                    if (stack.isEmpty()) {
                        valid = false;
                        break;
                    }
                    else {
                        char top = stack.pop();
                        
                        if ((c == ')' && top != '(') || (c == '}' && top != '{') || (c == ']' && top != '[')) {
                            valid = false;
                            break;
                        }
                    }
                }
            }
            
            if (valid && stack.isEmpty()) {
                answer++;
            }
        }
        
        return answer;
    }
}