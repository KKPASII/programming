#include <iostream>   
using namespace std;
int dp0[41];
int dp1[41];
int fibonacci0(int n) {
    if (n < 2)
        return dp0[n];
    if (dp0[n] == 0) {
        dp0[n] = fibonacci0(n - 1) + fibonacci0(n - 2);
        return dp0[n];
    }
    return dp0[n];
}
int fibonacci1(int n) {
    if (n < 2)
        return dp1[n];
    if (dp1[n] == 0) {
        dp1[n] = fibonacci1(n - 1) + fibonacci1(n - 2);
        return dp1[n];
    }
    return dp1[n];
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    dp0[0] = 1; dp0[1] = 0;
    dp1[0] = 0; dp1[1] = 1;
    int tc, n;
    cin >> tc;
    while(tc--) {
        cin >> n;
        cout << fibonacci0(n) << ' ' << fibonacci1(n) << '\n';
    }
    return 0;
}