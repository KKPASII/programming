#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
#define MAX 1000
int room[MAX + 1];
 int main() {
	int n; cin >> n;
	for (int i = 0; i < n; i++)
		cin >> room[i];

	vector<int> dp(n, INT_MAX);
	dp[0] = 0; 
	for (int i = 0; i < n; i++)
		for (int j = i + 1; j <= i + room[i]; j++) {
			if (j < n && dp[i] != INT_MAX)
				dp[j] = min(dp[j], dp[i] + 1);
		}
	if (dp[n - 1] == INT_MAX)
		cout << -1;
	else
		cout << dp[n - 1];
	return 0;
}