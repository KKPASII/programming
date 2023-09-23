// #define is_same(x, y) (x^y) ? 0 : 1		// !is_same(s[i],s[len-1-i])
#include <iostream>
#include <string>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string s;

	while (getline(cin, s)) {
		if (s[0] == '0') break;
		
		bool pal = true;
		unsigned len = s.length();
		unsigned mid = len / 2;
		len -= 1;
		for (unsigned i = 0; i < mid; i++) {
			if (s[i] != s[len - i]) {
				pal = false;
				break;
			}
		}

		if (pal) cout << "yes" << '\n';
		else cout << "no" << '\n';
	}

	return 0;
}