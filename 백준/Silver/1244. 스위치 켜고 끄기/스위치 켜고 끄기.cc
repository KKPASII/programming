#include <iostream>
using namespace std;
#define M 1
#define W 2

int sw[101];

void m(int n, int k) {
	for (int i = 1; i <= n; i++)
		if (i % k == 0) sw[i] = 1 - sw[i];
}

void w(int n, int k) {
	int t = 1;
	int left, right;
	left = k - t; right = k + t;

	sw[k] = 1 - sw[k];
	if (k == 1 || k == n) return;
	
	while (left > 0 && right < n + 1) {
		if (sw[left] == sw[right]) {
			sw[left] = 1 - sw[left];
			sw[right] = 1 - sw[right];
		}
		else return;

		t++;
		left = k - t; right = k + t;
	}
}

int main() {
	int n, student, id, num;

	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> sw[i];
	}
	cin >> student;
	for (int i = 0; i < student; i++) {
		cin >> id >> num;
		if (id == M) m(n, num);
		else if (id == W) w(n, num);
	}

	for (int i = 1; i <= n; i++) {
		cout << sw[i] << ' ';
		if (i % 20 == 0) cout << '\n';
	}
	
	return 0;
}