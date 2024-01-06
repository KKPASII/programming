#include <iostream>
using namespace std;
long long arr[101];
long long p(int n) {
	if (n < 1) return 0;
	else if (arr[n] != 0) return arr[n];
	else {
		arr[n] = p(n - 1) + p(n - 5);
		return arr[n];
	}
}
int main() {
	int t, n;
	arr[1] = 1; arr[2] = 1; arr[3] = 1; arr[4] = 2; arr[5] = 2;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> n;
		cout << p(n) << '\n';
	}
	return 0;
}