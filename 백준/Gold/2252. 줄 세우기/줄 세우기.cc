#include <iostream>
#include <vector>
#include <queue>
using namespace std;
vector<vector<int>> students;
vector<int> in_degree;

vector<int> topologySort(int n) {
	vector<int> result;
	queue<int> q;
	for (int i = 1; i <= n; ++i) {
		if (in_degree[i] == 0)
			q.push(i);
	}
	while (!q.empty()) {
		int current = q.front();
		q.pop();
		result.push_back(current);

		for (int next : students[current]) {
			if (--in_degree[next] == 0)
				q.push(next);
		}
	}
	return result;
}
int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int n, m, key_out, key_in; cin >> n >> m;
	students.resize(n + 1);
	in_degree.resize(n + 1, 0);
	for (int i = 1; i <= m; i++) {
		cin >> key_out >> key_in;
		students[key_out].push_back(key_in);
		in_degree[key_in]++;
	}
	vector<int> result = topologySort(n);
	for (int val : result)
		cout << val << ' ';
	return 0;
}