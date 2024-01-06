#include <iostream>
using namespace std;
int dp[31][31];
int binomial(int n, int k) {	// nCk
	if (k == 0 || n == k) return 1;
	else if (dp[n][k] != 0) return dp[n][k];
	else {
		dp[n][k] = binomial(n - 1, k - 1) + binomial(n - 1, k);
		return dp[n][k];
	}
}

int main() {
	int t, n, m;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> n >> m;
		cout << binomial(m, n) << '\n';
	}
	return 0;
}