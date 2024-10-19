#include <iostream>
#include <vector>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, x, y;
    cin >> n;
    vector<vector<int>> people(n);
    for (int i = 0; i < n; i++) {
        cin >> x >> y;
        people[i].push_back(x);
        people[i].push_back(y);
    }
    vector<int> rank(n, 0);
    for (int i = 0; i < n; i++) {
        int count = 1;
        for (int j = 0; j < n; j++) {
            if (i == j) continue;
            if (people[i][0] < people[j][0] && people[i][1] < people[j][1])
                count++;
        }
        rank[i] = count;
    }
    for (int& r : rank)
        cout << r << ' ';
    return 0;
}