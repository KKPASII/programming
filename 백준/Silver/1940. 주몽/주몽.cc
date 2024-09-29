#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;
	cin >> n >> m;
	vector<int> elements(n, 0);
	for (int i = 0; i < n; i++) {
		cin >> elements[i];
	}
	sort(elements.begin(), elements.end());

	int start = 0;
	int end = n-1;
	int answer = 0;
	
	while (start < end) {
		if (elements[start] + elements[end] < m) {
			start++;
		}
		else if (elements[start] + elements[end] > m) {
			end--;
		}
		else {
			answer++;
			start++;
			end--;
		}
	}
	cout << answer;
	return 0;
}