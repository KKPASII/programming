#include <iostream>
using namespace std;
#define MAX 50
#define DIR 4
char field[MAX][MAX];
int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};
int m, n;

void dfs(int x, int y);
void setField() {
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			field[i][j] = '0';
}

int main() {
	int t, k, worm;
	cin >> t;
	for (int tc = 0; tc < t; tc++) {	// n, m (행, 열)
		int x, y; worm = 0;
		cin >> m >> n >> k;	// 가로(열), 세로(행), 배추위치
		setField();

		for (int i = 0; i < k; i++) {
			cin >> y >> x;
			field[x][y] = '1';
		}

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (field[i][j] == '1') {
					worm++;
					dfs(i, j);
				}
			}
		}

		cout << worm << '\n';
	}
	return 0;
}

void dfs(int x, int y) {
	field[x][y] = '0';
	for (int i = 0; i < DIR; i++) {
		int nn = x + dx[i];
		int mm = y + dy[i];
		if (nn >= 0 && nn < n && mm >= 0 && mm < m) {
			if (field[nn][mm] == '1') dfs(nn, mm);
		}
	}
}