#include <iostream>
#include <string>
using namespace std;
int main() {
    int L;
    string str;
    cin >> L >> str;
    long long hash = 0;
    long long r = 1;
    const int M = 1234567891;
    for (int i = 0; i < L; i++) {
        hash = (hash + (str[i] - 'a' + 1) * r) % M;
        r = (r * 31) % M;
    }
    cout << hash << endl;
    return 0;
}