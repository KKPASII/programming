#include <iostream>
#include <cmath>
using namespace std;
int n;
bool isPrime(int n) {
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0) return false;
    return true;
}
void dfs(int num, int jarisu) {
    if (jarisu == n) {
        if (isPrime(num)) cout << num << '\n';
        return;
    }
    for (int i = 1; i < 10; i++) {
        if (i % 2 == 0) continue;
        int number = num * 10 + i;
        if (isPrime(number))
            dfs(number, jarisu + 1);
    }
}
int main() {
    cin >> n;dfs(2, 1);dfs(3, 1);dfs(5, 1);dfs(7, 1);
    return 0;
}