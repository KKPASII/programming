#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    int size = commands.size();
    for (auto & command : commands) {
        vector<int> sub(array.begin()+command[0]-1, array.begin()+command[1]);
        sort(sub.begin(), sub.end());
        answer.push_back(sub[command[2]-1]);
    }
    return answer;
}