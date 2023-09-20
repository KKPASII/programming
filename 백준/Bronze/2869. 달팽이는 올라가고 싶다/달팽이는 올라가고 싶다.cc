#include <iostream>
using namespace std;

int main(void) {
	int a, b, v;
	scanf("%d %d %d", &a, &b, &v);
	int total_up = a - b, total_v = v - b;
	if (total_v / total_up == 0) {
		cout << total_v / total_up;
	}
	else {
		cout << (total_v - 1) / (total_up)+1;
	}
	return 0;
}