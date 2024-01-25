#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	cin.tie(0); cout.tie(0); ios::sync_with_stdio(0);
	int n; cin >> n; if (n == 0) cout << 0;
	else {
		vector<int> v(n);
		for (int i = 0; i < n; i++)
			cin >> v[i];
		sort(v.begin(), v.end());
		int excluded = round(0.15 * n);
		double sum = 0;
		for (int i = excluded; i < n - excluded; i++)
			sum += v[i];
		int result = round(sum / (n - 2 * excluded));
		cout << result;
	}
	return 0;
}