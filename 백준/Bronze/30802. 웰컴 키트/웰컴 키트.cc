#include <iostream>
#include <algorithm>
#include <vector>
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
		int temp = size[i] / t;
		if (temp == 0 && size[i] % t != 0) {
			t_set++;
		}
		else {
			t_set += temp;
			if (size[i] % t != 0)
				t_set += 1;
		}
	}
	cout << t_set << '\n';
	cout << n / p << ' ' << n % p;
	return 0;
}