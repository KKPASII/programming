#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int max_w = 0;
    int max_h = 0;
    int w, h;
    for (vector<int> &card : sizes) {
        if (card[0] >= card[1]) {
            w = card[0]; h = card[1];
        }
        else {
            w = card[1]; h = card[0];
        }
        
        max_w = max(max_w, w);
        max_h = max(max_h, h);
    }
    return max_w * max_h;
}