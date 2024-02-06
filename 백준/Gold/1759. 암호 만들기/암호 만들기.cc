#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
int len, c;
char str[15];
vector<char> spells;
int alpha_v = 0, alpha_c = 0;
void dfs(int cur_len, int prev_idx) {
	if (cur_len == len && alpha_v > 0 && alpha_c > 1) {
		for (int i = 0; i < len; i++)
			cout << str[i];
		cout << '\n';
		return;
	}
	for (int i = prev_idx; i < c; i++) {
		int vv = 0, cc = 0;
		char ch = spells[i];
		str[cur_len] = ch;
		if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') vv++;
		else cc++;
		alpha_v += vv; alpha_c += cc;
		dfs(cur_len + 1, i + 1);
		alpha_v -= vv; alpha_c -= cc;
	}
}
int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	char tmp;
	cin >> len >> c;
	for (int t = 0; t < c; t++) {
		cin >> tmp; spells.push_back(tmp);
	}
	sort(spells.begin(), spells.end());
	dfs(0, 0);
	return 0;
}