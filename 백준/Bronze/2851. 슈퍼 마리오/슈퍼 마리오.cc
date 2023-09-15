#define gap(x) (100-x) < 0 ? -(100-x) : 100-x  
#include <iostream>
using namespace std;

#define MAX 10

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int point, nearestNum = 0, currentNum = 0;
	int currentNumGap, nearestNumGap;

	for (int i = 0; i < MAX; i++) {
		cin >> point;
		currentNum += point;

		currentNumGap = gap(currentNum);
		nearestNumGap = gap(nearestNum);

		if (currentNumGap < nearestNumGap) {
			nearestNum = currentNum;
		}
		else if (currentNumGap == nearestNumGap && currentNum > nearestNum) {
			nearestNum = currentNum;
		}
	}

	cout << nearestNum;
	return 0;
}