#include <iostream>
#include <vector>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, k;
    cin >> n >> k;
    vector<int> coins(n);
    for (int i = 0; i < n; i++)
        cin >> coins[i];
    int answer = 0;
    for (int i = n - 1; i >= 0; i--) {
        answer += k / coins[i];
        k %= coins[i];
    }
    cout << answer;
    return 0;
}