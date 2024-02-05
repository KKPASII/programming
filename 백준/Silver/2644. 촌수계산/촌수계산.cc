#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;
vector<int> graph[101];
vector<char> visit(101, '0');
int cnt = 0;
int dfs(int parent, int child) {
	if (parent == child) return cnt;
	visit[parent] = '1';
	queue<int> q;
	q.push(parent);
	while (!q.empty()) {
		int current = q.front();
		q.pop();
		for (int i = 0; i < graph[current].size(); i++) {
			int x = graph[current][i];
			if (visit[x] == '0') {
				q.push(x);
				cnt++;
				int d = dfs(x, child);
				if (d != -1) return d;
			}
		}
	}
	cnt--;
	return -1;
}
int main() {
	vector<int> relation(2);
	int n, m, x, y;
	cin >> n;
	cin >> relation[0] >> relation[1];
	cin >> m;
	for (int t = 0; t < m; t++) {
		cin >> x >> y;
		graph[x].push_back(y);
		graph[y].push_back(x);
	}
	int result = dfs(relation[0], relation[1]);
	cout << result;
	return 0;
}