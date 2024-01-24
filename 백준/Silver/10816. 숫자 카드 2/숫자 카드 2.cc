#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;
int main() {
	cin.tie(0); cout.tie(0); ios::sync_with_stdio(0);
	int n, m, num;
	unordered_map<int, int> card;
	cin >> n;
	for (int c = 0; c < n; c++) {
		cin >> num; card[num]++;
	}
	cin >> m;
	for (int c = 0; c < m; c++) {
		cin >> num;
		if (card.find(num) != card.end())
			cout << card[num] << ' ';
		else cout << "0 ";
	}
	return 0;
}