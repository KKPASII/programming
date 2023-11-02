#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <cstring>
using namespace std;

const int MAX = 1000;
vector<int> node[MAX+1];

void bfs(bool * visit, int cur) {
	if (visit[cur] == true) return;	//방문
	visit[cur] = true;	//방문 x
	cout << cur << ' ';

	queue<int> q;
	q.push(cur);

	while (!q.empty()) {
		int front = q.front();
		int size = node[front].size();

		for (int i = 0; i < size; i++) {
			int x = node[front][i];
			if (visit[x] != true) {	// 방문 안 한 노드만 넣기
				q.push(x);
				visit[x] = true;
				cout << x << ' ';
			}
		}

		q.pop();
	}

	return;
}

void dfs(bool *visit, int cur) {
	if (visit[cur] == true) return;	//방문
	visit[cur] = true;	//방문 x
	cout << cur << ' ';

	int size = node[cur].size();
	for (int i = 0; i < size; i++) {
		int x = node[cur][i];
		if (visit[x] == false) {
			dfs(visit, x);
		}
	}

	return;
}

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	bool visit[MAX + 1] = { 0, };
	int N, M, V, e1, e2;
	cin >> N >> M >> V;

	for (int i = 0; i < M; i++) {
		cin >> e1 >> e2;
		node[e1].push_back(e2);
		node[e2].push_back(e1);
	}

	for (int i = 1; i <= N; i++) {
		sort(node[i].begin(), node[i].end());
	}

	dfs(visit, V);
	// memset(visit, 0, 1001 * sizeof(bool));
	for (int i = 1; i <= MAX + 1; i++) {
		visit[i] = false;
	}
	cout << '\n';
	bfs(visit, V);

	return 0;
}