#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(string s) {
    string answer = s;
    sort(answer.begin(), answer.end(), [](char a, char b) {
        if (tolower(a) == tolower(b)) {
            return a > b;
        }
        return a > b;
    });
    return answer;
}