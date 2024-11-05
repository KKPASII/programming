#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(int k, vector<int> score) {
    int size = score.size();
    vector<int> answer;
    vector<int> score_list;
    for(int i = 0 ; i < size; i++) {
        score_list.push_back(score[i]);
        sort(score_list.begin(), score_list.end(), greater<int>());
        if (score_list.size() > k)
            score_list.pop_back();
        answer.push_back(score_list.back());
    }
    return answer;
}