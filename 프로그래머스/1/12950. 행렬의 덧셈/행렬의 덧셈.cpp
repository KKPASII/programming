#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
    vector<vector<int>> answer;
    int m = arr1.size();
    int n = arr1[0].size();
    
    for (int row = 0; row < m; row++) {
        vector<int> v;
        for (int col = 0; col < n; col++) {
            v.push_back(arr1[row][col] + arr2[row][col]);
        }
        answer.push_back(v);
    }
    
    return answer;
}