#include <iostream>
#include <vector>
#include <stack>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int k; cin >> k;
    vector<int> v(k);
    for (int i = 0; i < k; i++)
        cin >> v[i];
    stack<int> stk;
    for (int i = 0; i < k; i++) {
        if (!stk.empty() && v[i] == 0)
            stk.pop();
        else
            stk.push(v[i]);
    }
    int answer = 0;
    while (!stk.empty()) {
        answer += stk.top();
        stk.pop();
    }
    cout << answer;
    return 0;
}