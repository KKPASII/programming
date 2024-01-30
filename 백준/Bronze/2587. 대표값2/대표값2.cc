#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	int num, sum = 0;
	vector<int> v(5);
	for (int i = 0; i < 5; i++) {
		cin >> num;
		sum += num;
		v[i] = num;
	}
	sort(v.begin(), v.end());
	cout << sum / 5 << '\n';
	cout << v[2];
	return 0;
}