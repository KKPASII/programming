#include <string>
using namespace std;

int solution(string t, string p) {
    int answer = 0;
    int p_len = p.length();  // p의 길이
    long long p_value = stoll(p);  // p를 숫자로 변환

    for (int i = 0; i <= t.length() - p_len; i++) {
        string sub_str = t.substr(i, p_len);  // 부분 문자열 추출
        long long sub_value = stoll(sub_str);  // 부분 문자열을 숫자로 변환

        if (sub_value <= p_value) {
            answer++;
        }
    }

    return answer;
}
