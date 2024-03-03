#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;
vector<int> in_degree;
vector<vector<int>> problems;
vector<int> topologySort(int n) {
	vector<int> answer;
	priority_queue<int, vector<int>, greater<int>> pq;
	for (int i = 1; i <= n; i++)
		if (in_degree[i] == 0)
			pq.push(i);
	while (!pq.empty()) {
		int current = pq.top();
		pq.pop();
		answer.push_back(current);
		for (int next : problems[current]) {
			if (--in_degree[next] == 0)
				pq.push(next);
		}
	}
	return answer;
}
int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int n, m, key_in, key_out;
	cin >> n >> m;
	problems.resize(n+1);
	in_degree.resize(n+1, 0);
	for (int i = 1; i <= m; i++) {
		cin >> key_out >> key_in;
		problems[key_out].push_back(key_in);
		in_degree[key_in]++;
	}
	vector<int> result = topologySort(n);
	for (int answer : result)
		cout << answer << ' ';
	return 0;
}