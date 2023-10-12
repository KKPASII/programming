#include <string>
#include <vector>

using namespace std;
int cnt = 0;

void dfs(vector<int>& numbers, int size, int idx, int sum, int target) {
    if (idx == size) {
        if (sum == target) cnt++;
        return;
    }
    
    dfs(numbers, size, idx+1, sum + numbers[idx], target);
    dfs(numbers, size, idx+1, sum - numbers[idx], target);
}

int solution(vector<int> numbers, int target) {
    int answer = 0;
    int size = numbers.size();
    
    dfs(numbers, size, 0, 0, target);
    answer = ::cnt;
    
    return answer;
}