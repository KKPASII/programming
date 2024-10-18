#include <iostream>
#include <deque>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    int testcase;
    cin >> testcase;
    while (testcase--) {
        int n, m;
        cin >> n >> m;
        deque<pair<int, int>> dq;
        for (int i = 0; i < n; i++) {
            int priority; cin >> priority;
            dq.push_back({ priority, i });
        }
        int count = 0;
        while (!dq.empty()) {
            pair<int, int> front = dq.front();
            dq.pop_front();
            bool is_max = true;
            for (const auto& element : dq) {
                if (element.first > front.first) {
                    is_max = false;
                    break;
                }
            }
            if (is_max) {
                count++;
                if (front.second == m) {
                    break;
                }
            }
            else {
                dq.push_back(front);
            }
        }
        cout << count << endl;
    }
    return 0;
}