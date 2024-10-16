#include <string>
#include <vector>
#include <regex>
using namespace std;

int solution(string s) {
    vector<string> words = {"zero", "one", "two", "three", "four", "five", "six", "seven","eight","nine"};
    string answer = s;
    regex r;
    int len = words.size();
    for (int i = 0; i < len; i++) {
        r = words[i];
        answer = regex_replace(answer, r, to_string(i));
    }
    return stoi(answer);
}