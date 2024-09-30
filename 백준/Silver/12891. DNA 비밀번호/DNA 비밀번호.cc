#include <iostream>
#include <string>
#define DNA_NUM 4
using namespace std;

int checkArr[DNA_NUM];
int ACGT[DNA_NUM];
int checkSecret = 0;
void Add(char c);
void Remove(char c);

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int answer = 0;
	int S, P;
	cin >> S >> P;
	string A;
	cin >> A;

	for (int i = 0; i < DNA_NUM; i++) {
		cin >> checkArr[i];
		if (checkArr[i] == 0)
			checkSecret++;
	}

	for (int i = 0; i < P; i++) {
		Add(A[i]);
	}
	if (checkSecret == DNA_NUM)
		answer++;

	for (int i = P; i < S; i++) {
		int j = i - P;
		Add(A[i]);
		Remove(A[j]);

		if (checkSecret == DNA_NUM)
			answer++;
	}

	cout << answer;
	return 0;
}

void Add(char c) {
	switch (c) {
	case 'A':
		ACGT[0]++;
		if (checkArr[0] == ACGT[0])
			checkSecret++;
		break;
	case 'C':
		ACGT[1]++;
		if (checkArr[1] == ACGT[1])
			checkSecret++;
		break;
	case 'G':
		ACGT[2]++;
		if (checkArr[2] == ACGT[2])
			checkSecret++;
		break;
	case 'T':
		ACGT[3]++;
		if (checkArr[3] == ACGT[3])
			checkSecret++;
		break;
	}
}

void Remove(char c) {
	switch (c) {
	case 'A':
		if (checkArr[0] == ACGT[0])
			checkSecret--;
		ACGT[0]--;
		break;
	case 'C':
		if (checkArr[1] == ACGT[1])
			checkSecret--;
		ACGT[1]--;
		break;
	case 'G':
		if (checkArr[2] == ACGT[2])
			checkSecret--;
		ACGT[2]--;
		break;
	case 'T':
		if (checkArr[3] == ACGT[3])
			checkSecret--;
		ACGT[3]--;
		break;
	}
}