#include <iostream>
#include <queue>
#include <string>
using namespace std;
int main() {
    cin.tie(0); cout.tie(0); ios::sync_with_stdio(0);
    queue<int> q;
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        string input;
        cin >> input;
        if (input == "push") {
            int num; cin >> num;
            q.push(num);
        }
        else if (input == "pop") {
            if (!q.empty()) {
                cout << q.front() << '\n';
                q.pop();
            }
            else cout << "-1\n";
        }
        else if (input == "size")
            cout << q.size() << '\n';
        else if (input == "empty")
            cout << (q.empty() ? 1 : 0) << '\n';
        else if (input == "front") {
            if (!q.empty())
                cout << q.front() << '\n';
            else cout << "-1\n";
        }
        else if (input == "back") {
            if (!q.empty())
                cout << q.back() << '\n';
            else cout << "-1\n";;
        }
    }
    return 0;
}
