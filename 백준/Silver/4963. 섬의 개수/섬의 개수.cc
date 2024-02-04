	#include <iostream>
	#include <vector>
	#include <algorithm>
	using namespace std;
	#define MAX 50
	#define DIR 8
	int map[MAX][MAX];
	bool visit[MAX][MAX];
	int dx[DIR] = {0, 1, 1, 1, 0, -1, -1, -1};
	int dy[DIR] = {1, 1, 0, -1, -1, -1, 0, 1};
	void cleanMap() {
		for (int i = 0; i < MAX; i++)
			for (int j = 0; j < MAX; j++) {
				map[i][j] = 0;
				visit[i][j] = false;
			}
	}
	void countLand(int h, int w, int i, int j) {
		map[i][j] = 0;
		visit[i][j] = true;
		for (int k = 0; k < DIR; k++) {
			int x = i + dx[k];
			int y = j + dy[k];
			if (x >= 0 && x < h && y >= 0 && y < w)
				if (map[x][y] == 1 && !visit[x][y]) countLand(h, w, x, y);
		}
	}
	int main() {
		ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
		int w, h;
		while (1) {
			cin >> w >> h;
			if (w == 0 && h == 0) break;
			cleanMap();
			int cnt = 0;
			for (int i = 0; i < h; i++)
				for (int j = 0; j < w; j++)
					cin >> map[i][j];
			for (int i = 0; i < h; i++)
				for (int j = 0; j < w; j++) {
					if (map[i][j] == 1 && !visit[i][j]) {
						cnt++;
						countLand(h, w, i, j);
					}
				}
			cout << cnt << '\n';
		}
		return 0;
	}