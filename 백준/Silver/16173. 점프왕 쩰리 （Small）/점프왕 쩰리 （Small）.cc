#include <iostream>
using namespace std;

#define MAX 3

int board[MAX][MAX] = { 0, };

bool dfs(int N, int x, int y) {
	if (x >= N || y >= N) return false;
	if (x == N - 1 && y == N - 1) return true;

	int move = board[x][y];

	if (board[x + move][y] == 0 && board[x][y + move] == 0) return false;
	else return (dfs(N, x + move, y) || dfs(N, x, y + move));
}

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, temp;
	bool possible;

	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> temp;
			board[i][j] = temp;
		}
	}

	possible = dfs(n, 0, 0);

	if (possible) cout << "HaruHaru";
	else cout << "Hing";

	return 0;
}