#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>
using namespace std;
struct StringHash {
    size_t operator()(const string& s) const {
        size_t hash = 5381;
        for (char c : s)
            hash = ((hash << 5) + hash) + c;
        return hash;
    }
};
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n, m;
    cin >> n >> m;
    unordered_map<string, int, StringHash> name_to_number;
    vector<string> number_to_name(n + 1);
    string poketmon;
    for (int i = 1; i <= n; i++) {
        cin >> poketmon;
        name_to_number[poketmon] = i;
        number_to_name[i] = poketmon;
    }
    for (int i = 0; i < m; i++) {
        cin >> poketmon;
        if (isalpha(poketmon[0]))
            cout << name_to_number[poketmon] << '\n';
        else
            cout << number_to_name[stoi(poketmon)] << '\n';
    }
    return 0;
}