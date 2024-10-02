#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, top;
	cin >> n;
	vector<int> list(n,0);
	vector<char> result_list;
	for (int i = 0; i < n; i++) {
		cin >> list[i];
	}

	stack<int> stk;
	int num = 1;
	bool isStack = true;
	int size = list.size();
	for (int i = 0; i < size; i++) {
		int now = list[i];
		if (now >= num) {
			while (now >= num) {
				stk.push(num++);
				result_list.push_back('+');
			}

			stk.pop();
			result_list.push_back('-');
		}
		else {
			int top = stk.top();
			stk.pop();
			if (top > now) {
				cout << "NO";
				isStack = false;
				break;
			}
			else {
				result_list.push_back('-');
			}
		}
	}

	if (isStack) {
		for (const char& element : result_list) {
			cout << element << '\n';
		}
	}

	return 0;
}