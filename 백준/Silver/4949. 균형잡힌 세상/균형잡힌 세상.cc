#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(NULL);
    string str;
    while (getline(cin, str) && str != ".") {
        stack<int> stk;
        bool isBalanced = true;
        for (char ch : str) {
            if (ch == '(' || ch == '[')
                stk.push(ch);
            else if (ch == ')' || ch == ']') {
                if (stk.empty() || (ch == ')' && stk.top() != '(') ||
                    (ch == ']' && stk.top() != '[')) {
                    isBalanced = false;
                    break;
                }
                stk.pop();
            }
        }
        if (isBalanced && stk.empty()) cout << "yes\n";
        else cout << "no\n";
    }
    return 0;
}