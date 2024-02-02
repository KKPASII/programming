#include <iostream>
#include <vector>
using namespace std;
int answer = 0;
int main(void) {
	ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	int n, k;cin >> n >> k;
	vector<int> v(n);
	for (int t = 0; t < n; t++)
		cin >> v[t];
	int s = 0, e = 0, sum = v[0];
	while (e < n) {
		if (sum < k) {
			e++;
			if (e < n) sum += v[e];
		}
		else if (sum > k) {
			sum -= v[s];
			s++;
		}
		else if (sum == k) {
			answer++;
			sum -= v[s];
			s++; e++; 
			if (e < n) sum += v[e];
		}
	}
	cout << answer;
	return 0;
}