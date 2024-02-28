#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int n; cin >> n;
	vector<string> s(n);

	for (int i = 0; i < n; i++)
		cin >> s[i];
	
	string answer;
	bool found = true;
	for (auto& str : s) {
		int len = str.length();
		for (int i = 0; i < len / 2; i++) {
			if (str[i] != str[len - i - 1]) {
				found = false;
				break;
			}
		}

		if (found) {
			answer = str;
			break;
		}
	}

	if (!found) {
		for (int i = 0; i < n - 1; i++) {
			string reversed_s = s[i];
			reverse(reversed_s.begin(), reversed_s.end());
			for (int j = i + 1; j < n; j++) {
				if (reversed_s ==  s[j]) {
					answer = reversed_s;
					found = true;
					break;
				}
			}

			if (found) break;
		}
	}

	cout << answer.length() << ' ' << answer[answer.length() / 2];
	return 0;
}