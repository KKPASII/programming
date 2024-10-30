#include <iostream>
#include <map>
#include <string>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, m;
    cin >> n >> m;
    map<string, string> dict;
    string addr, pw;
    for (int i = 0; i < n; i++) {
        cin >> addr >> pw;
        dict[addr] = pw;
    }
    for (int i = 0; i < m; i++) {
        cin >> addr;
        cout << dict[addr] << '\n';
    }
    return 0;
}