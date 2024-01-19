#include <iostream>
using namespace std;
int gcd(int a, int b) {
	int r = 9999999;
	while (r != 0) {
		r = a % b;
		a = b;
		b = r;
	}
	return a;
}
int main() {
	int a, b, result;
	cin >> a >> b;
	if (a > b) {
		int temp = a;
		a = b;
		b = temp;
	}
	result = gcd(a, b);
	cout << result << '\n';
	cout << (a*b)/result;
	return 0;
}