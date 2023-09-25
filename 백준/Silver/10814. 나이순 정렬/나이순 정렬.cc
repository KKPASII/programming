#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool compare(pair<int, string> a, pair<int, string> b) {
	return a.first < b.first;
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int N, age; cin >> N;
	string name;
	vector<pair<int, string>> v;
	for (int i = 0; i < N; i++) {
		cin >> age >> name;
		v.push_back(make_pair(age, name));
	}
	stable_sort(v.begin(), v.end(), compare);
	for (int i = 0; i < v.size(); i++) {
	cout << v[i].first << ' ' << v[i].second << '\n';
	}
	return 0;
}