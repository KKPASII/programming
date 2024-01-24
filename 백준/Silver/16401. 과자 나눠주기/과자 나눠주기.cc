#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	cin.tie(0); cout.tie(0); ios::sync_with_stdio(0);
	int n, m, temp;
	cin >> m >> n;
	vector<int> snacks(n);
	for (int c = 0; c < n; c++)
		cin >> snacks[c];
	int start = 1;
	int end = *max_element(snacks.begin(), snacks.end());
	int maxLen = 0, sum = 0;
	while (start <= end) {
		int mid = (start + end) / 2;
		int sum = 0;
		for (auto& snk : snacks)
			sum += snk / mid;
		if (sum >= m) {
			maxLen = mid;
			start = mid + 1;
		}
		else
			end = mid - 1;
	}
	cout << maxLen;
	return 0;
}