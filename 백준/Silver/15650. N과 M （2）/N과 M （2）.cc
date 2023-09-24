#include <iostream>
using namespace std;

int n, m;
int arr[8];
bool isused[8];

bool isASC(int k) {
	for (int i = k-1; i > 0; i--) {
		if (arr[i] < arr[i - 1]) return false;
	}
	return true;
}

void func(int k) {
	if (k == m && isASC(k)) {
		for (int i = 0; i < m; i++) {
			cout << arr[i] << ' ';
		}
		cout << '\n';
		return;
	}
	for (int i = 1; i <= n; i++) {
		if (!isused[i]) {
			arr[k] = i;
			isused[i] = 1;
			func(k + 1);
			isused[i] = 0;
		}
	}


}

int main(void) {

	cin >> n >> m;
	func(0);

	return 0;
}