// SILVER 2
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define MAX 8
int n, m;
vector<int> nums;
int answer[MAX];
bool visit[MAX];
void track(int key) {
	if (key == m) {
		for (int i = 0; i < m; i++)
			cout << answer[i] << ' ';
		cout << '\n';
		return;
	}
	int prev = -1;
	for (int i = 0; i < n; i++) {
		if (!visit[i] && nums[i] != prev) {
			visit[i] = true;
			answer[key] = nums[i];
			prev = nums[i];
			track(key + 1);
			visit[i] = false;
		}
	}
}
int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> n >> m;
	nums.resize(n);
	for (int i = 0; i < n; i++)
		cin >> nums[i];
	sort(nums.begin(), nums.end());
	track(0);
	return 0;
}