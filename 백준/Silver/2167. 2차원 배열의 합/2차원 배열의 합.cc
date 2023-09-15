#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m, c;
	int i, j, k, x1, x2, y1, y2;
	int temp, sum = 0;

	cin >> n >> m;

	vector<vector<int>> vec(n+1, vector<int>(m+1, 0));

	for (i = 1; i <= n; i++) {
		for (j = 1; j <= m; j++) {
			cin >> temp;
			vec[i][j] = vec[i-1][j] + vec[i][j-1] - vec[i-1][j-1] + temp ;
		}
	}

	cin >> k;
	for (c = 0; c < k; c++) {
		cin >> x1 >> y1 >> x2 >> y2;
		sum = vec[x2][y2] - vec[x1 - 1][y2] - vec[x2][y1 - 1] + vec[x1 - 1][y1 - 1];
		cout << sum << '\n';
	}

	return 0;
}