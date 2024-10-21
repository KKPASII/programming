#include <iostream>
#include <vector>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int m, num;
    string order;
    vector<bool> set(21, false);
    cin >> m;
    for (int i = 0; i < m; i++) {
        cin >> order;
        if (order == "add") {
            cin >> num;
            set[num] = true;
        }
        else if (order == "remove") {
            cin >> num;
            set[num] = false;
        }
        else if (order == "check") {
            cin >> num;
            cout << (set[num] ? 1 : 0) << '\n';
        }
        else if (order == "toggle") {
            cin >> num;
            set[num] = !set[num];
        }
        else if (order == "all") {
            set.assign(21, true);
        }
        else if (order == "empty") {
            set.assign(21, false);
        }
    }
    return 0;
}