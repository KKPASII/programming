#include <iostream>
#include <string>
#include <map>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int heard, seen;
    cin >> heard >> seen;
    map<string, int> m;
    string name;
    int count = 0;
    for (int i = 0; i < heard; i++) {
        cin >> name;
        m[name] = 1;
    }
    for (int i = 0; i < seen; i++) {
        cin >> name;
        if (m.find(name) != m.end()) {
            count++;
            m[name]++;
        }
    }
    cout << count << '\n';
    for (auto& it : m) {
        if (it.second == 2)
            cout << it.first << '\n';
    }
    return 0;
}