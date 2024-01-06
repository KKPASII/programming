#include <iostream>
using namespace std;

int main() {
	int t, a, b, r, lcm;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> a >> b; r = 99999;
		lcm = a * b;
		while (r != 0) {
			r = a % b;
			a = b;
			b = r;
		}
		lcm /= a;
		cout << lcm << '\n';
	}
	return 0;
}