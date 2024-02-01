#include <iostream>
#include <deque>
#include <tuple>
using namespace std;
int main() {
    cin.tie(0); cout.tie(0); ios::sync_with_stdio(0);
    int n, tmp; cin >> n;
    deque<tuple<int, int>> dq;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        dq.emplace_back(make_tuple(tmp, i+1));
    }
    while (1) {
        int target = get<0>(dq.front());
        cout << get<1>(dq.front()) << ' ';
        dq.pop_front();
        if (dq.empty()) break;
        if (target > 0)
            for (int i = 0; i < target - 1; i++) {
                dq.push_back(dq.front());
                dq.pop_front();
        } else
            for (int i = target; i < 0; i++) {
                dq.push_front(dq.back());
                dq.pop_back();
            }
    }
    return 0;
}