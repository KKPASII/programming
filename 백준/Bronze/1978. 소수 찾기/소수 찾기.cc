#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main() {
    int n, cnt = 0;
    bool isGood;
    vector<int> v;
    cin >> n; cin.ignore();
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp; v.push_back(temp);
    }
    for (auto& num : v) {
        isGood = true;
        for (int i = 2; i <= sqrt(num); i++) {
            if (num % i == 0) {
                isGood = false;
                break;
            }
        }
        if (num > 1 && isGood) cnt++;
    }
    cout << cnt;
    return 0;
}
