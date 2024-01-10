#include <iostream>
#include <string>
using namespace std;
int main() {
	int n, cnt = 0;
	cin >> n;
	int num = 666;
	while (cnt < n) {
		string numStr = to_string(num);
		if (numStr.find("666") != string::npos) cnt++;
		num++;
	}
	cout << num-1;
	return 0;
}