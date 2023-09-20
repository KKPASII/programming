#include <iostream>
using namespace std;

void dfs(int number, int jarisu);
bool isPrime(int number);

static int N;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N;
	dfs(2, 1);	// param: 소수, 해당 소수의 자릿수
	dfs(3, 1);
	dfs(5, 1);
	dfs(7, 1);

	return 0;
}

void dfs(int number, int jarisu) {
	if (jarisu == N) {
		if (isPrime(number)) {	// 소수이면
			cout << number << '\n';
		}
		return;
	}

	for (int i = 1; i < 10; i++) {
		if (i % 2 == 0) continue;	// 짝수이면 pass
		if (isPrime(number * 10 + i)) {		// 소수이면
			dfs(number * 10 + i, jarisu + 1);		// 자리수 늘려서 다시 탐색 dfs(소수로 판명된 수, 늘린 자릿 수)
		}
	}
}

bool isPrime(int number) {
	for (int i = 2; i <= number / 2; i++) {
		if (number % i == 0) return false;
	}
	return true;
}