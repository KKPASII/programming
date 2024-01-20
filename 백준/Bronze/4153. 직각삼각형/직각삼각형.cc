#include <iostream>
using namespace std;
int main() {
	int a, b, c;
	while (scanf("%d %d %d", &a, &b, &c) == 3) {
		if (a == 0 && b == 0 && c == 0) break;
		if (a > c) swap(a, c);
		if (b > c) swap(b, c);
		if ((a * a + b * b) == c * c) cout << "right"<<'\n';
		else cout << "wrong" << '\n';
	}
	 return 0;
}