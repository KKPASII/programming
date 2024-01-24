#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool findNum(const vector<int>& card, int key, int size) {
    int start = 0, end = size - 1;
    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (key == card[mid]) return true;
        else if (key < card[mid])
            end = mid - 1;
        else
            start = mid + 1;
    }
    return false;
}
int main() {
    int n, m;
    vector<int> sk_card;
    vector<int> cards;
    cin >> n;
    for (int s = 0; s < n; s++) {
        int temp; cin >> temp; sk_card.push_back(temp);
    }
    cin >> m;
    for (int c = 0; c < m; c++) {
        int temp; cin >> temp; cards.push_back(temp);
    }
    sort(sk_card.begin(), sk_card.end());
    int size = sk_card.size();
    for (auto& num : cards) {
        bool found = findNum(sk_card, num, size);
        if (found) cout << 1 << ' ';
        else cout << 0 << ' ';
    }
    return 0;
}
