#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    unordered_map<char, int> map;
    int len = s.size();
    for (int i = 0; i < len; i++) {
        if (map.find(s[i]) != map.end()) {
            answer.push_back(i - map[s[i]]);
        }
        else {
            answer.push_back(-1);
        }
        map[s[i]] = i;
    }
    return answer;
}