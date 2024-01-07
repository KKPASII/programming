#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
// bronze1 - 1157
int main() {
    int cnt[26] = { 0 };
    string alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string str; int dupCnt = 0, seq, max = -1;
    cin >> str;

    transform(str.begin(), str.end(), str.begin(), ::tolower);

    for (char c : str) {
        if ('a' <= c && c <= 'z') {
            cnt[c - 'a']++; // 해당 알파벳의 빈도수 증가
        }
    }

    for (int i = 0; i < 26; i++) {
        if (max < cnt[i]) {
            max = cnt[i]; seq = i;
        }
    }
    
    for (int i = 0; i < 26; i++) {
        if (cnt[i] == max) {
            dupCnt++;
        }
    }

    if (dupCnt == 1) cout << alpha[seq];
    else cout << '?';
    return 0;
}