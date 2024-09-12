#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

string to3rev(int n) {
    string s = "";
    int num = n;
    while (num > 0) {
        int digit = num % 3;
        s += to_string(digit);
        num /= 3;
    }
    return s;
}

int solution(int n) {
    int answer = 0;
    string rev3 = to3rev(n);
    reverse(rev3.begin(), rev3.end());
    
    int three_multiple = 1;
    for (int i = 0; i < rev3.size(); i++) {
        answer += (rev3[i] - '0') * three_multiple;
        three_multiple *= 3;
    }
    
    return answer;
}