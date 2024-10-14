#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int max_w = 0;
    int max_h = 0;
    for (vector<int> &card : sizes) {
        max_w = max(max_w, max(card[0], card[1]));
        max_h = max(max_h, min(card[0], card[1]));
    }
    return max_w * max_h;
}