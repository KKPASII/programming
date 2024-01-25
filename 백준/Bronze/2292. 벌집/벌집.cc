#include <iostream>
using namespace std;
int main() {
	long long n; cin >> n; n -= 1;
	if (n == 0) cout << 1;
	else {
		long long cnt = 1; long long range = 6;
		while (n > 0) {
			n -= range; range += 6; cnt++;
		}
		cout << cnt;
	}
	return 0;
}