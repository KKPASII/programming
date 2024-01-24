#include <iostream>
#include <string>
#include <stack>
using namespace std;
int main() {
	cin.tie(0); cout.tie(0); ios::sync_with_stdio(0);
	stack<int> stk;
	int n; cin >> n;
	for (int i = 0; i < n; i++) {
        string cmd;
        cin >> cmd;
        if (cmd == "push") {
            int num;
            cin >> num;
            stk.push(num);
        }
        else if (cmd == "pop") {
            if (!stk.empty()) {
                cout << stk.top() << '\n';
                stk.pop();
            }
            else
                cout << "-1" << '\n';
        }
        else if (cmd == "size")
            cout << stk.size() << '\n';
        else if (cmd == "empty")
            cout << (stk.empty() ? 1 : 0) << '\n';
        else if (cmd == "top") {
            if (!stk.empty())
                cout << stk.top() << '\n';
            else
                cout << "-1" << '\n';
        }
	}
	
	return 0;
}