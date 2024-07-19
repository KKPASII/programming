#include <string>
#include <vector>

using namespace std;

string solution(int n) {
    string answer = "";
    vector<string> word = {"수", "박"};
    
    for (int i = 0; i < n; i++) {
        answer += word[i % 2];
    }

    return answer;
}