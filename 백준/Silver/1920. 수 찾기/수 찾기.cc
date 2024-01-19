#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int binSearch(vector<int> &v, int size, int target) {
	int left = 0;
	int right = size - 1;
	while (left <= right) {
		int mid = left + (right - left) / 2;
		if (v[mid] == target)
			return 1;
		else if (v[mid] < target)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return 0;
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n, m;
	cin >> n;
	vector<int> A(n);
	for (int i = 0; i < n; i++)
		cin >> A[i];
	sort(A.begin(), A.end());
	cin >> m;
	for (int i = 0; i < m; i++) {
		int target; cin >> target;
		int result = binSearch(A, n, target);
		cout << result << '\n';
	}
	return 0;
}