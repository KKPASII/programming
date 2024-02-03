#include <iostream>
using namespace std;
#define MAX 8
int nums[MAX + 1] = { 0, };
int n, m;
bool isASC() {
	for (int i = 0; i < m-1; i++)
		if (nums[i] > nums[i + 1]) return false;
	return true;
}
void track(int key) {
	if (key == m) {
		if (isASC()) {
			for (int i = 0; i < m; i++)
				cout << nums[i] << ' ';
			cout << '\n';
		}
		return;
	}
	for (int i = 1; i <= n; i++) {
		nums[key] = i;
		track(key + 1);
	}
	return;
}
int main() {
	ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	cin >> n >> m;
	track(0);
	return 0;
}