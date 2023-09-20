#define not_same(x, y) (x^y) ? true : false
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
		
		bool not_pal = false;
		unsigned len = s.length();
		unsigned mid = len / 2;
		len -= 1;
		for (unsigned i = 0; i < mid; i++) {
			if (not_pal = not_same(s[i], s[len - i])) {
				break;
			}
		}

		if (not_pal) cout << "no" << '\n';
		else cout << "yes" << '\n';
	}

	return 0;
}