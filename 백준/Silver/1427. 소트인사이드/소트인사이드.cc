#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
bool compare(int a, int b) {
	return a > b;
}
int main(void) {
	string str;
	vector<int> v;
	cin >> str;
	for (int i = 0; str[i] != '\0'; i++)
		v.push_back(str[i] - '0');
	sort(v.begin(), v.end(), compare);
	for (int i = 0; i < v.size(); i++)
		printf("%d", v[i]);
	return 0;
}