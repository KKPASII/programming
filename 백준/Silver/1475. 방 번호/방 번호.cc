#include <iostream>
#include <string>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int cnt[10] = { 0, };

	string myRoom;
	int max = 0;

	getline(cin, myRoom);
	size_t len = myRoom.length();

	for (unsigned i = 0; i < len; i++) {
		unsigned number = myRoom[i] - '0';
		cnt[number]++;
	}

	cnt[9] += cnt[6];
	cnt[9] = cnt[9] % 2 + cnt[9] / 2;
	cnt[6] = 0;

	for (int i = 0; i < 10; i++) {
		if (max < cnt[i]) max = cnt[i];
	}
	
	cout << max;
	return 0;
}