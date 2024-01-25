#include <iostream>
#include <deque>
#include <string>
using namespace std;
int main() {
	int n; cin >> n; deque<int> dq;
	for (int i = 0; i < n; i++) {
		string input; cin >> input;
		if (input == "push_front") {
			int num; cin >> num;
			dq.push_front(num);
		}
		else if (input == "push_back") {
			int num; cin >> num;
			dq.push_back(num);
		}
		else if (input == "pop_front") {
			if (!dq.empty()) {
				cout << dq.front() << '\n';
				dq.pop_front();
			}
			else cout << "-1\n";
		}
		else if (input == "pop_back") {
			if (!dq.empty()) {
				cout << dq.back() << '\n';
				dq.pop_back();
			}
			else cout << "-1\n";
		}
		else if (input == "size")
			cout << dq.size() << '\n';
		else if (input == "empty")
			cout << (dq.empty() ? 1 : 0) << '\n';
		else if (input =="front") {
			if (!dq.empty())
				cout << dq.front() << '\n';
			else cout << "-1\n";
		}
		else if (input == "back") {
			if (!dq.empty())
				cout << dq.back() << '\n';
			else cout << "-1\n";
		}
	}
	return 0;
}