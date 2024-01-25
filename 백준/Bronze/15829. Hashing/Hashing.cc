#include <iostream>
#define MOD 1234567891
using namespace std;
int main() {
	cin.tie(0); cout.tie(0); ios::sync_with_stdio(0);
	char ch; int n, r = 1;
	cin >> n;
    long long result = 0;
	for (int i = 0; i < n; i++) {
		cin >> ch;
		int num = ch - 'a' + 1;
		result = (result + (num * r)) % MOD;
		r = (r * 31) % MOD;
	}
	cout << result;
	return 0;
}