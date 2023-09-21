#include <iostream>
#include <vector>
#include <algorithm>
//#include <stack>
#include <queue>
using namespace std;

#define MAX_NODE 1000

bool visit[MAX_NODE+1];
vector<int> node[MAX_NODE+1];

void DFS(int vertex) {
	visit[vertex] = true;
	cout << vertex << ' ';
	for (int i = 0; i < node[vertex].size(); i++) {
		int nextVertex = node[vertex][i];
		if (!visit[nextVertex])	// 다음 재귀호출 할 노드가 미방문이라면
			DFS(nextVertex);
	}
}

void BFS(int vertex) {
	queue<int> q;
	q.push(vertex);
	visit[vertex] = true;
	while (!q.empty()) {
		int x = q.front();	// 맨 앞 요소
		q.pop();			// 맨 앞 요소 뽑기
		cout << x << ' ';
		for (int i = 0; i < node[x].size(); i++) {	// 노드와 이어진 노드 크기만큼
			int nextNode = node[x][i];	// 큐에 있는 노드
			if (!visit[nextNode]) {	// 방문하지 않았다면
				q.push(nextNode);	// 큐에 넣기
				visit[nextNode] = true;	// 방문 처리
			}
		}
	}
}

int main(void) {
	int N, M, V, n1, n2;	// N: 정점의 개수, M: 간선의 개수, V: 시작할 정점의 번호
	cin >> N >> M >> V; cin.ignore();

	for (int i = 0; i < M; i++) {
	/*
	* <출처 : TWpower's Tech Blog>
	* 단방향의 경우 node[n1].push_back(n2);만 쓰기
	* 가중치가 있는 경우 vector<pair<int,int>> node[N+1];로 만들거나 구조체를 만들어서 가중치와 함께 저장
	*  node[n1].push_back(make_pair(n2,weight)); n1->n2 가중치: weight
	*/
		scanf("%d %d", &n1, &n2);
		node[n1].push_back(n2);	// n1 번 노드에 n2 잇기
		node[n2].push_back(n1);
	}

	for (int i = 1; i <= N; i++)
		sort(node[i].begin(), node[i].end());

	DFS(V);
	cout << endl;

	for (int i = 0; i <= N; i++)
		visit[i] = false;

	BFS(V);

	return 0;
}