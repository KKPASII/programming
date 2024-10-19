#include <iostream>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    int answer = 0;
    while (n >= 0) {
        if (n % 5 == 0) {
            answer += n / 5;
            cout << answer;
            break;
        }
        n -= 3;
        answer++;
    }
    if (n < 0) cout << -1;
    return 0;
}