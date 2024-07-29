#include <string>
#include <vector>
using namespace std;

int divisor(int number) {
    int cnt = 0;
    for (int i = 1; i * i <= number; i++) {
        if (i * i == number) cnt++;
        else if (i == number/i) cnt+=2;
    }
    return cnt;
}

int solution(int left, int right) {
    int answer = 0;
    for (int i = left; i <= right; i++) {
        int div = divisor(i);
        if ((div & 1) == 0)
            answer += i;
        else
            answer -= i;
    }
    return answer;
}