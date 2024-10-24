#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool myComp(const string& a, const string& b, int n) {
    if (a[n] != b[n]) {
        return a[n] < b[n];
    }
    return a < b;
}

vector<string> solution(vector<string> strings, int n) {
    vector<string> answer = strings;
    sort(answer.begin(), answer.end(), [n](const string& a, const string& b){
        return myComp(a, b, n);
    });
    return answer;
}