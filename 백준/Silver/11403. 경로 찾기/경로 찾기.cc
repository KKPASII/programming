#include <iostream>
using namespace std;
#define MAX 100
int node[100][100];
int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int n; cin >> n;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> node[i][j];
			
	for (int k = 0; k < n; k++)
		for (int s = 0; s < n; s++)
			for (int e = 0; e < n; e++) {
				if (node[s][k] != 0 && node[k][e] != 0)
					node[s][e] = 1;
			}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
			cout << node[i][j] << ' ';
		cout << '\n';
	}
	return 0;
}