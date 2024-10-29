#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(vector<int> food) {
    string answer = "";
    int size = food.size();
    for (int i = 1; i < size; i++)
        if (food[i] > 1)
            for (int j = 0; j < food[i]/2; j++)
                answer += to_string(i);
    string rev_answer = answer;
    reverse(rev_answer.begin(), rev_answer.end());
    answer += "0";
    answer += rev_answer;
    return answer;
}