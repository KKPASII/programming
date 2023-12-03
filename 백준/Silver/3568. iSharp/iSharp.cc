#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
	string str[3] = {"&", "[]", "*"};
	string input;

	getline(cin, input);
	istringstream iss(input); // 토큰화
	vector<string> tokens;
	while (iss >> input)
		tokens.push_back(input);

	for (int i = 1; i < tokens.size(); i++) {
		string s = "", value ="", syn = "";
		int index = 0;
		int size = tokens[i].length();

		for (index = 0; index < size; index++) {
			char c = tokens[i][index];
			if (c == '&' || c == '[' || c == '*' || c == ',' || c == ';')
				break;
			value += c;
		}

		for (int k = size - 1; k >= index; k--) {
			char t = tokens[i][k];
			switch (t) {
			case '&': syn += t; break;
			case '[': syn += ']'; break;
			case ']': syn += '['; break;
			case '*': syn += t; break;
			default: break;
			}
		}

		s = s + tokens[0]+ syn +  ' ' + value + ';';
		cout << s << '\n';
	}

 	return 0;
}