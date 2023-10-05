#include <iostream>
#include <algorithm>
#include <vector>
#include <math.h>
using namespace std;

int num[8001];
int main(void) {
	int N, input, mean = 0, mode, most = -1, min = 9999, max = -9999;
	bool not_first = false;
	do {
		scanf("%d", &N);	// N은 홀수(1~500,000)
	} while (N % 2 == 0);
	vector<int> v;
	for (int i = 0; i < N; i++) {
		scanf("%d", &input);
		num[input + 4000]++;
		v.push_back(input);
		mean += input;
		if (max < input) max = input;		// 최댓값 구하기
		if (min > input) min = input;		// 최솟값 구하기
	}
	sort(v.begin(), v.end());		// 오름차순 청렬
	for (int i = 0; i < 8001; i++) {	// 최빈값 구하기
		if (num[i] == most) {		// 최빈값이 같으면 
			if (not_first) {			// 처음 최빈값 true로 되어있으면
				mode = i - 4000;
				not_first = false;	// 두번째이므로 false로 바꾸기
			}
		}
		if (num[i] > most) {	// 최빈값이 더 크면 바꾸고
			most = num[i];
			mode = i - 4000;
			not_first = true;		// 최빈값 바꿔줬으니 true(갱신)
		}
	}
	mean = round((double)mean / N);
	cout << mean << '\n';			// 산술평균
	cout << v[v.size() / 2] << '\n';								// 중앙값
	cout << mode << '\n';								// 최빈값
	cout << max - min << '\n';						// 범위
	return 0;
}