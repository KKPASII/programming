class Solution {
    public String solution(String s) {
        StringBuilder answer = new StringBuilder();
        boolean isFirst = true;
        for (char ch : s.toCharArray()) {
            if (ch == ' ') {
                answer.append(ch);
                isFirst = true;
            }
            else {
                if (isFirst) {
                    answer.append(Character.toUpperCase(ch));
                    isFirst = false;
                }
                else {
                    answer.append(Character.toLowerCase(ch));
                }
            }
        }
        return answer.toString();
    }
}