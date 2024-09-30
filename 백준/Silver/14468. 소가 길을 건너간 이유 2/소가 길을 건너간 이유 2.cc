#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#define SIZE 26
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int answer = 0;
	string path;
	cin >> path;
	
	vector<vector<int>> pos(26);
	int len = path.size();
	for (int i = 0; i < len; i++) {
		char cow = path[i];
		pos[cow-'A'].push_back(i);
	}

	for (int i = 0; i < SIZE; i++) {
		for (int j = i+1; j < SIZE; j++) {
			const auto& cow1 = pos[i];
			const auto& cow2 = pos[j];

			if (cow1[0] < cow2[0] && cow1[1] > cow2[0] && cow1[1] < cow2[1]) {
				answer++;
			}
			if (cow2[0] < cow1[0] && cow2[1] > cow1[0] && cow2[1] < cow1[1]) {
				answer++;
			}
		}
	}
	cout << answer;
	return 0;
}