#include <string>
#include <vector>

using namespace std;

int solution(int n, int k) {
    int answer = 0;
    int m = n / 10;
    answer = n * 12000 + 2000 * (k - m);
    return answer;
}