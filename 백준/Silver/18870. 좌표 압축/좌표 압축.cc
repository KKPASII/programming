#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> arr(n, 0);
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	vector<int> sorted_arr = arr;
	sort(sorted_arr.begin(), sorted_arr.end());
	int idx = 0;
	unordered_map<int, int> map;
	for (int i = 0; i < n; i++) {
		if (map.find(sorted_arr[i]) == map.end()) {
			map[sorted_arr[i]] = idx;
			idx++;
		}
	}

	for (int i = 0; i < n; i++) {
		cout << map[arr[i]] << ' ';
	}

	return 0;
}