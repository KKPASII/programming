#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main() {
	int n; cin >> n;
	char ch;
	string s;
	stack<char> stk;
	for (int t = 0; t < n; t++) {
		while (!stk.empty()) stk.pop();
		cin >> s;
		for (int i = 0; i < s.length(); i++) {
			if (stk.empty()) {
				stk.push(s[i]);
			}
			else {
				if (s[i] == ')' && stk.top() == '(') stk.pop();
				else stk.push(s[i]);
			}
		}
		if (stk.empty()) cout << "YES" << '\n';
		else cout << "NO"<<'\n';
	}
	return 0;
}