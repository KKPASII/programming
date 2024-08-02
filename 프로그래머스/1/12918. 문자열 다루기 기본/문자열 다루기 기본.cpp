#include <string>
#include <vector>

using namespace std;

bool solution(string s) {
    bool answer = true;
    int s_len = s.length();
    if (s_len != 4 && s_len != 6)
        return false;

    for (int i = 0; i < s_len; i++) {
        char c = s[i];
        if (c < '0' || c > '9') {
            return false;
        }
    }
    return answer;
}