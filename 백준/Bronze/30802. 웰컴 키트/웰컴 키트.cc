#include <iostream>
using namespace std;
#define SIZE 6
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n, t, p, t_set = 0;
	int size[SIZE];
	cin >> n;
	for (int i = 0; i < SIZE; i++) {
		cin >> size[i];
	}
	cin >> t >> p;
	for (int i = 0; i < SIZE; i++) {
		t_set += size[i] / t;
		if (size[i] % t != 0) {
			t_set++;
		}
	}
	cout << t_set << '\n';
	cout << n / p << ' ' << n % p;
	return 0;
}