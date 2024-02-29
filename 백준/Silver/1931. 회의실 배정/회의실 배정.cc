#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int n; cin >> n;
	vector<pair<int, int>> meeting_times(n);
	for (int i = 0; i < n; i++) {
		cin >> meeting_times[i].second;
		cin >> meeting_times[i].first;
	}
	sort(meeting_times.begin(), meeting_times.end());
	int cnt = 0;
	int end_time = -1;
	for (int i = 0; i < n; i++) {
		if (meeting_times[i].second >= end_time) {
			end_time = meeting_times[i].first;
			cnt++;
		}
	}
	cout << cnt;
	return 0;
}