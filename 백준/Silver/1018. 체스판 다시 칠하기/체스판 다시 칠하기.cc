#define smaller(x, y) x < y ? x : y
#include <iostream>
#include <string>
using namespace std;
#define MAX 50

int minCnt = 64;
char board[MAX][MAX] = { 0, };
char wBoard[8][8] = { {'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
											{ 'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
											{'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
											{ 'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'}, 
											{'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
											{ 'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'}, 
											{'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
											{ 'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'} };
char bBoard[8][8] = { { 'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
											{'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
											{ 'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
											{'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
											{ 'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
											{'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
											{ 'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'}, 
											{'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'} };


void printBoard(int m, int n) {
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			printf("%d ", board[i][j]);
		}
		printf("\n");
	}
}

// m, n : 비교할 행렬의 시작점
void compBoard(int m, int n) {
	int i, j, ii, jj, wcnt = 0, bcnt = 0,  cnt = 0;
	
	for (i = m; i < m + 8; i++) {
		for (j = n; j < n + 8; j++) {
			ii = i - m; jj = j - n;	// ii, jj는 언제나 '0 ~ 7'의 범위만 검사하도록
				if (board[i][j] != wBoard[ii][jj])	wcnt++;	// board와 다르면 cnt++
				if (board[i][j] != bBoard[ii][jj])	bcnt++;	// board와 다르면 cnt++
		}
	}
	minCnt = (cnt = smaller(wcnt, bcnt)) < minCnt ? cnt : minCnt;	// minCnt보다 작으면 더 작은 값으로 초기화
}

int main(void) {
	int m, n, r, c;
	string line;
	scanf("%d %d", &m, &n); getchar();

	// board 입력 받기
	for (int i = 0; i < m; i++) {
		getline(cin, line, '\n');
		for (int j = 0; j < n; j++) {
			board[i][j] = line[j];
		}
	}

	// 브루트 포스
	m -= 7; n -= 7;
	if (m == 0 && n == 0) {
		compBoard(m, n);
	}
	else if (m == 0 && n > 0) {
		for (c = 0; c < n; c++) {
			compBoard(m, c);
		}
	}
	else if (m > 0 && n == 0) {
		for (r = 0; r < m; r++) {
			compBoard(r, n);
		}
	}
	else {
		for (r = 0; r < m; r++) {
			for (c = 0; c < n; c++) {
				compBoard(r, c);
			}
		}
	}

	printf("%d", minCnt);

	return 0;
}