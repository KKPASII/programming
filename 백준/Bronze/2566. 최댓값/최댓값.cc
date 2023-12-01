#include <iostream>
using namespace std;
#define MAX 9

int main(void) {
	int n= 0, m=0,temp, max = -1;

	for (int i = 0; i < MAX; i++) {
		for (int j = 0; j < MAX; j++) {
			cin >>temp;
			if (max < temp) {
				max = temp; n = i; m = j;
			}
		}
	}

	cout << max << '\n';
	cout << n +1 << ' ' << m + 1;
	return 0;
}