#include <string>
#include <vector>
#include <algorithm>
using namespace std;

long long solution(long long n) {
    long long answer = 0;
    string num = "";
    while (n > 0) {
        num += (n % 10) + '0';
        n /= 10;
    }
    sort(num.begin(), num.end(), greater<>());
    answer = stoll(num);
    return answer;
}