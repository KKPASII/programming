#include <iostream>
using namespace std;

int main() {
	int t, a, b, r, big, small, gcd;
	cin >> t;
	
	for (int i = 0; i < t; i++) {
		cin >> a >> b; r = 999999;
		if (a > b) {
			big = a; small = b;
		} else {
			big = b; small = a;
		}

		while (r != 0) {
			r = big % small;
			big = small;
			small = r;
		}
		gcd = (a * b) / big;
		cout << gcd << '\n';
	}
	return 0;
}