#include <iostream>
#include <string>
using namespace std;

int main() {
    int alpha[26];
    string s;
    cin >> s;
    for (int i = 0; i < 26; i++) {
        alpha[i] = -1;
    }
    for (int i = 0; i < s.length(); i++) {
        char c = s[i] - 'a';
        if (alpha[c] == -1) {
            alpha[c] = i;
        }
    }
    for (int i = 0; i < 26; i++) {
        cout << alpha[i] << ' ';
    }
    return 0;
}
