#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n, target, num, i, j;
	int count = 0;

	// 입력 받을 숫자 개수, 목표로 하는 숫자
	cin >> n >> target;

	vector<int> calSum(n + 1, 0);

	// 숫자 입력 받고 계산
	for (i = 1; i <= n; i++) {
		cin >> num;
		calSum[i] = calSum[i - 1] + num;	// 누적합 저장하기
	}

	// 경우의 수 계산
	for (i = 1; i <= n; i++) {
		for (j = i; j <= n; j++) {
			if (calSum[j] - calSum[i - 1] == target) {
				count++;
				break;
			}
		}
	}

	cout << count << '\n';
	return 0;
}