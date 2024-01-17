#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t, n, m;
    vector<pair<int, int>> dot;
    cin >> t; cin.ignore();
    for (int tc = 0; tc < t; tc++) {
        cin >> n >> m;
        dot.push_back(make_pair(n, m));
    }

    int min_x = dot[0].first, max_x = dot[0].first;
    int min_y = dot[0].second, max_y = dot[0].second;
    for (const auto& d : dot) {
        min_x = min(min_x, d.first);
        max_x = max(max_x, d.first);
        min_y = min(min_y, d.second);
        max_y = max(max_y, d.second);
    }

    int width = max_x - min_x;
    int height = max_y - min_y;

    cout << width * height;

    return 0;
}
