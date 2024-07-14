#include <string>
#include <iostream>
#include <cctype>
using namespace std;

bool solution(string s)
{
    bool answer = true;
    int pCount = 0;
    int yCount = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'P' || s[i] == 'p') pCount++;
        if (s[i] == 'Y' || s[i] == 'y') yCount++;
    }
    if (pCount != yCount) answer = false;
    return answer;
}