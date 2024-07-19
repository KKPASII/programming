#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer = arr;
    int min = *min_element(answer.begin(), answer.end());
    int pos = find(answer.begin(), answer.end(), min) - answer.begin();
    answer.erase(answer.begin() + pos);
    if (answer.size() == 0) answer.push_back(-1);
    return answer;
}