#include<string>
#include <iostream>
#include <stack>
using namespace std;

bool solution(string s)
{
    bool answer = true;

    stack<int> stk;
    for (int i = 0; i < s.length(); i++) {
        if (stk.empty()) {
            stk.push(s[i]);
        }
        else {
            if (stk.top() == '(' && s[i] == ')')
                stk.pop();
            else stk.push(s[i]);
        }
    }
    answer = (stk.empty()) ? true : false;
    return answer;
}