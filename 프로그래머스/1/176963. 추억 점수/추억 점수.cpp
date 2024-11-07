#include <string>
#include <vector>
#include <map>
using namespace std;

vector<int> solution(vector<string> name, vector<int> yearning, vector<vector<string>> photo) {
    vector<int> answer;
    map<string, int> m;
    int size = name.size();
    for (int i = 0; i < size; i++) {
        m[name[i]] = yearning[i];
    }
    
    for (auto& shot : photo) {
        int sum = 0;
        for (int i = 0; i < shot.size(); i++) {
            if (m.find(shot[i]) != m.end()) {
                sum+=m[shot[i]];
            }
        }
        answer.push_back(sum);
    }
    return answer;
}