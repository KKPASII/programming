#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(int k, int m, vector<int> score) {
    int answer = 0;
    sort(score.rbegin(), score.rend());
    int size = score.size();
    for (int i = m - 1; i < size; i += m)
        answer += score[i] * m;
    return answer;
}