#include <iostream>
#include <stack>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, cmd;
	stack<int> s;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> cmd;
		switch (cmd)
		{
		case 1:
			int x; cin >> x; s.push(x);
			break;
		case 2:
			if (!s.empty()) {
				cout << s.top() << '\n';
				s.pop();
			}
			else cout << "-1\n";
			break;
		case 3:
			cout << s.size() << '\n';
			break;
		case 4:
			cout << (s.empty() ? 1 : 0) << '\n';
			break;
		case 5:
			if (!s.empty()) cout << s.top() << '\n';
			else cout << "-1\n";
			break;
		default:
			break;
		}
	}
	return 0;
}