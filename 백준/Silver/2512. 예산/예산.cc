#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
long long cal_Budget(vector<int> province, int mid_budget) {
	long long sum = 0;
	for (auto& required_budget : province)
		sum += min(required_budget, mid_budget);
	return sum;
}
int main() {
	cin.tie(0); cout.tie(0); ios::sync_with_stdio(0);
	int n; cin >> n;
	vector<int> province(n);
	for (int i = 0; i < n; i++)
		cin >> province[i];
	long long limit; cin >> limit;
	long long start = 1;
	long long end = *max_element(province.begin(), province.end());
	long long maxBudget = 0;
	while (start <= end) {
		long long mid = (start + end) / 2;
		long long budget = cal_Budget(province, mid);
		if (budget > limit)
			end = mid - 1;
		else {
			maxBudget = max(budget, maxBudget);
			start = mid + 1;
		}
	}
	cout << end;
	return 0;
}