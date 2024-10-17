#include <iostream>
#include <cmath>
using namespace std;
bool isPrime(int num) {
    if (num < 2) return false;
	for (int i = 2; i <= sqrt(num); i++) {
		if (num % i == 0) return false;
	}
	return true;
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int m, n;
	cin >> m >> n;
	for (int i = m; i <= n; i++) {
		if (isPrime(i)) cout << i << '\n';
	}
	return 0;
}