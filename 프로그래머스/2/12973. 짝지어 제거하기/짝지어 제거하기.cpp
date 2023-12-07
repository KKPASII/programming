#include <iostream>
#include <string>
#include <stack>
using namespace std;

int solution(string s)
{
    int answer = -1;
    
    stack<char> stk;
    for (auto& c : s) {
        if (!stk.empty()) {
            if (c == stk.top())
                stk.pop();
            else stk.push(c);
        }
        else stk.push(c);
    }
    
    answer = stk.empty() ? 1 : 0;
    return answer;
}