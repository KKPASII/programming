#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int idx;
bool myComp(const string& a, const string& b) {
    if (a[idx] != b[idx])
        return a[idx] < b[idx];
    return a < b;
}
vector<string> solution(vector<string> strings, int n) {
    idx = n;
    sort(strings.begin(), strings.end(), myComp);
    return strings;
}