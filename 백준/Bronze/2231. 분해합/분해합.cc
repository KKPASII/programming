#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int getSum(int num) {
	int sum = num;
	while (num > 0) {
		sum += num % 10;
		num /= 10;
	}
	return sum;
}
int main() {
	int n, answer = 9999999;
	cin >> n;
	for (int i = 1; i < n; i++) {
		int hap = getSum(i);
		if (hap == n) {
			answer = i;
			break;
		}
	}
	if (answer == 9999999) cout << 0;
	else cout << answer;
}