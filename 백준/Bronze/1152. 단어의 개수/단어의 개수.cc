#include <iostream>
#include <string>
using namespace std;
int main() {
	string s;
	int cnt = 1, len;
	getline(cin, s); len = s.length();
	for (int i = 0; i < len; i++) {
		if (s[i] == ' ') cnt++;
	}
	if (s[0] == ' ') cnt--;
	if (s[len - 1] == ' ') cnt--;
	cout << cnt;
	return 0;
}