#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    cin.tie(0); cout.tie(0); ios::sync_with_stdio(0);
    long long temp;
    int n, k;
	cin >> k >> n;
    vector<long long> lans;
	for (int i = 0; i < k; i++) {
		cin >> temp;
		lans.push_back(temp);
	}

    long long start = 1;
    long long end = *max_element(lans.begin(), lans.end());
	long long maxLen = 0;
	while (start <= end)
	{
		long long mid = (start + end) / 2;
		long long sum = 0;
		for (int i = 0; i < k; i++)
			sum += (lans[i] / mid);
		if (sum >= n) {
			maxLen = mid;
			start = mid + 1;
		}
        else
		    end = mid - 1;
	}
	cout << maxLen;
	return 0;
}