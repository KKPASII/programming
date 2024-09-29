#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;
	int start_idx = 1;
	int end_idx = 1;
	int sum = 1;
	int answer = 1;

	while (end_idx < N) {

		if (sum == N) {
			answer++;
			end_idx++;
			sum += end_idx;
		}
		else if (sum < N) {
			end_idx++;
			sum += end_idx;
		}
		else {
			sum -= start_idx;
			start_idx++;
		}
	}

	cout << answer;
	return 0;
}