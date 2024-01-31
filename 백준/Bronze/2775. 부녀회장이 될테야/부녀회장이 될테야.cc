#define MAX_SIZE 15
#include <iostream>
using namespace std;
int apartment[MAX_SIZE][MAX_SIZE];
int calc_residents(int k, int n) {
    if (apartment[k][n] != 0) return apartment[k][n];
    else {
        for (int i = 1; i <= k; i++)
            for (int j = 1; j <= n; j++)
                apartment[i][j] = calc_residents(i, j - 1) + calc_residents(i - 1, j);
        return apartment[k][n];
    }
}
int main() {
    cin.tie(0); cout.tie(0); ios::sync_with_stdio(0);
    int t, k, n; cin >> t;
    for (int i = 0; i < MAX_SIZE; i++)
        apartment[0][i] = i;
    for (int tc = 0; tc < t; tc++) {
        cin >> k >> n;
        int answer = calc_residents(k, n);
        cout << answer << '\n';
    }
    return 0;
}
