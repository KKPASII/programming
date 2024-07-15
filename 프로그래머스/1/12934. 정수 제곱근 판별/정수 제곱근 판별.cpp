#include <string>
#include <vector>
#include <cmath>
#include <cctype>
using namespace std;

long long solution(long long n) {
    long long answer = 0;
    double num = sqrt(n);
    if (num == (long long)num) answer = pow(num + 1, 2);
    else answer = -1;
    return answer;
}