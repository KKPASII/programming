#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	int n, m;
	cin >>n>>m;
	vector<int> card(n);
	for (int i = 0; i < n; i++)
		cin >> card[i];
	sort(card.begin(), card.end());
	int maxSum = 0;
	for (int k = 0; k < n - 2; k++) {
		int left = k+1, right = n - 1;
		while (left < right) {
			int sum = card[k] + card[left] + card[right];
			if (sum > m)
				right -= 1;
			else {
				maxSum = max(sum, maxSum);
				left += 1;
			}
		}
	}
	cout << maxSum;
	return 0;
}