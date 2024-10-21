#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n, m;
    cin >> n >> m;
    string poketmon;
    unordered_map<string, string> poketmon_dogam;
    for (int i = 1; i <= n; i++) {
        cin >> poketmon;
        poketmon_dogam[poketmon] = to_string(i);
        poketmon_dogam[to_string(i)] = poketmon;
    }
    for (int i = 0; i < m; i++) {
        cin >> poketmon;
        cout << poketmon_dogam[poketmon] << '\n';
    }
    return 0;
}