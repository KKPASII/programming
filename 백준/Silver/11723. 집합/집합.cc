#include <iostream>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int m, num, S = 0;
    string order;
    cin >> m;
    for (int i = 0; i < m; i++) {
        cin >> order;
        if (order == "add") {
            cin >> num;
            S |= (1 << (num - 1));
        }
        else if (order == "remove") {
            cin >> num;
            S &= ~(1 << (num - 1));
        }
        else if (order == "check") {
            cin >> num;
            cout << ((S & (1 << (num - 1))) ? 1 : 0) << '\n';
        }
        else if (order == "toggle") {
            cin >> num;
            S ^= (1 << (num - 1));
        }
        else if (order == "all") {
            S = (1 << 20) - 1;
        }
        else if (order == "empty") {
            S = 0;
        }
    }
    return 0;
}