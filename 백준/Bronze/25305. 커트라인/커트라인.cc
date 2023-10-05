#include <iostream>
#include <vector>
#include <sstream>
#include <algorithm>
using namespace std;

int scores[10000];

bool compare(int a, int b) {
	return a > b;
}

int main(void) {
	int N, k;
	cin >> N >> k;
	cin.ignore();
	
	string buf;
	getline(cin, buf);
	
	vector<string> v;
	stringstream ss(buf);
	string temp;

	while (getline(ss, temp, ' ')) {	// vector에 넣기
		v.push_back(temp);
	}
	for (int i = 0; i < v.size(); i++) {	// scores 배열에 넣기
		scores[i] = stoi(v[i]);				// string -> int
	}
	sort(scores, scores+N, compare);	// 정렬(오름차순)

	cout << scores[k - 1];
	return 0;
}