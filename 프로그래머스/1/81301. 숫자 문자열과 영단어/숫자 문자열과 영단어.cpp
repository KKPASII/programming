#include <string>
#include <vector>
#include <map>
using namespace std;

int solution(string s) {
    map<string, char> m = {{"zero",'0'}, {"one",'1'}, {"two",'2'}, {"three",'3'}, {"four",'4'}, 
                           {"five",'5'}, {"six",'6'}, {"seven",'7'}, {"eight",'8'}, {"nine",'9'}};
    string answer = "";
    int len = s.size();
    string str = "";
    for (int i = 0; i < len; i++) {
        if (s[i] < 58) {
            answer += s[i];
        }
        else {
            str += s[i];
            if (m.find(str) != m.end()) {
                answer += m[str];
                str = "";
            }
        }
    }
    return stoi(answer);
}