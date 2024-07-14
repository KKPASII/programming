#include <string>
#include <vector>
#include <cmath>
using namespace std;

long long solution(int a, int b) {
    long long answer = 0;
    if (a == b) {
        answer = a;
    }
    else {
        if (a > b) {
            a = a ^ b;
            b = a ^ b;
            a = a ^ b;
        }
        for (int i = a; i <= b; i++) {
            answer += i;
        }
    }
    
    return answer;
}