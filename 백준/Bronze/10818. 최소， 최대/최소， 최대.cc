#include <iostream>
using namespace std;
int arr[1000000];
int main() {
	int n, temp, _min = 1111111, _max = -1111111;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> temp;
		if (temp < _min) _min = temp;
		if (temp > _max) _max = temp;
	}
	cout << _min << ' ' << _max;
	return 0;
}