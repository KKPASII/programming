#include <string>
#include <vector>

using namespace std;

string str[4] = {"aya", "ye", "woo", "ma"};

int solution(vector<string> babbling) {
    int answer = 0;
    int size = babbling.size();
    int cnt;
    
    for (int i = 0; i < size; i++) {
        string s = babbling[i];
        int len = s.length();
        
        cnt = 0;
        if (s.find("aya") != string::npos) {
                cnt += 3;
        }
        if (s.find("ye") != string::npos) {
            cnt += 2;
        }
        if (s.find("woo") != string::npos) {
            cnt += 3;
        }
        if (s.find("ma") != string::npos) {
            cnt += 2;
        }
        
        if (cnt == len) answer++;
    }
    
    
    return answer;
}