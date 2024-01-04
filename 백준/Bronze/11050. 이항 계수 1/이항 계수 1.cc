#include <iostream>
using namespace std;
int C[11][11];

int c(int n, int k) {
	if (n == k || k == 0) return 1;
	else if (C[n][k] != NULL) return C[n][k];
	else if (C[n][k] == NULL) {
		C[n][k] = c(n - 1, k-1) + c(n - 1, k);
		return C[n][k];
	}
}

int main() {
	int n, k;

	for (int i = 0; i < 11; i++) {
		C[0][i] = 1;
		C[i][i] = 1;
	}
	cin >> n >> k;
	cout << c(n, k);
	return 0;
}