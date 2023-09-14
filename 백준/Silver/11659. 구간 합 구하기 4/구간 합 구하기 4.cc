#include <iostream>
using namespace std;

int nums[100004];
int sums[100004];

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m, sec1, sec2, k, temp, sum;
	
	cin >> n >> m;

	for (k = 1; k <= n; k++) {
		cin >> temp;
		nums[k] = temp;
		sums[k] = sums[k-1] + temp;
	}

	for (k = 0; k < m; k++) {
		cin >> sec1 >> sec2;
		sum = sums[sec2] - sums[sec1-1];
		cout << sum << '\n';
	}
	return 0;
}