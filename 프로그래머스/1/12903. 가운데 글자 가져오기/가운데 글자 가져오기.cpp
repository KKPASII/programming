#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    int len = s.length();
    if (len % 2) {  // odd
        answer += s[len/2];
    }
    else {
        int mid = len/2;
        answer = s.substr(mid-1, 2);
    }
    
    return answer;
}