#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer;
    int i = 0, j = 0, sum;
    int size = numbers.size();
    
    for (i = 0; i < size; i++) {
        int x = numbers[i];
        for (j = i+1; j < size; j++) {
            int y = numbers[j];
            sum = x + y;
            answer.push_back(sum);
        }
    }
    sort(answer.begin(), answer.end());
    answer.erase(unique(answer.begin(), answer.end()), answer.end());
    return answer;
}