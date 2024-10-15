#include <string>
#include <vector>
#include <iostream>
using namespace std;

string solution(string s, int n) {
    int len = s.size();
    string answer = s;
    if (len > 0) {
        for (int i = 0; i < len; i++) {
            if (answer[i] == ' ') continue;
            int idx;
            if (answer[i] - 'a' < 0) {
                idx = answer[i] - 'A' + n;
                answer[i] = 'A';
            }
            else {
                idx = answer[i] - 'a' + n;
                answer[i] = 'a';
            }
            answer[i] += idx % 26;
        }
    } 
    return answer;
}