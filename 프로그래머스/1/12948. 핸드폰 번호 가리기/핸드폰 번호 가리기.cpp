#include <string>
#include <vector>

using namespace std;

string solution(string phone_number) {
    string answer = "";
    int len = phone_number.length();
    string visible_nums = phone_number.substr(len-4, 4);
    len -= 4;
    while (len > 0) {
        answer += '*';
        len--;
    }
    answer += visible_nums;
    return answer;
}