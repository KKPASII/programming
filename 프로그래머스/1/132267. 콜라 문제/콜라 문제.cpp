#include <string>
#include <vector>
using namespace std;

int solution(int a, int b, int n) {
    int answer = 0;
    int gain;
    while (n/a > 0) {
        gain = n/a * b;
        n = n%a;
        answer += gain;
        n = n+gain;
    }
    return answer;
}