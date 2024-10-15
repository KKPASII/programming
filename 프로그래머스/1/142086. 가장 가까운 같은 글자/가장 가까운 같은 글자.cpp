#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    unordered_map<char, int> map;
    int len = s.size();
    char cur_char;
    for (int i = 0; i < len; i++) {
        cur_char = s[i];
        if (map.find(cur_char) != map.end()) {
            answer.push_back(i - map[cur_char]);
            map[cur_char] = i;
        }
        else {
            map[cur_char] = i;
            answer.push_back(-1);
        }
    }
    return answer;
}