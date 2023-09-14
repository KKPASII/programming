#include <iostream>
using namespace std;

#define MAX_N 1024

int tablePlus[MAX_N + 1][MAX_N + 1];
// vector(동적 할당)로도 써보기
int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m, x1, x2, y1, y2, temp;
	int i, j, sum;

	cin >> n >> m;
	
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n; j++) {
			cin >> temp;
			tablePlus[i][j] = tablePlus[i][j-1] + temp;
		}
	}

	for (i = 0; i < m; i++) {
		sum = 0;
		cin >> x1 >> y1 >> x2 >> y2;

		for (j = x1; j <= x2; j++) {
			sum += tablePlus[j][y2] - tablePlus[j][y1 - 1];
		}
		cout <<  sum << '\n';
	}

	return 0;
}