#include <iostream>
#include <string>
using namespace std;

char board[5][16];

int main() {

	for (int i = 0; i < 5; ++i) {
		cin >> board[i];
	}

	for (int i = 0; i < 15; ++i) {
		for (int j = 0; j < 5; ++j) {
			if (board[j][i] != NULL) {
				cout << board[j][i];
			}
		}
	}

    return 0;
}