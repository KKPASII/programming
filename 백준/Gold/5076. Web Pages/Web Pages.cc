#include <iostream>
#include <string>
#include <algorithm>
#include <stack>
#include <vector>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    string html;
    while (getline(cin, html)) {
        if (html[0] == '#') break;
        //transform(html.begin(), html.end(), html.begin(), ::tolower);
        stack<string> stk;
        bool isLegal = true;
        int len = html.length();
        int idx = 0;
        while (idx < len) {
            if (html[idx] == '<') {
                int end = html.find('>', idx);
                if (end == string::npos) {
                    isLegal = false;
                    break;
                }
                string tag = html.substr(idx + 1, end - idx - 1);
                idx = end + 1;
                vector<string> split;
                string temp;
                for (char& c : tag) {
                    if (c == ' ' && !temp.empty()) {
                        split.push_back(temp);
                        temp.clear();
                    }
                    else
                        temp += c;
                }
                if (!temp.empty())
                    split.push_back(temp);

                if (!split.empty()) {
                    if (split[0][0] == '/') {
                        string tagName = split[0].substr(1);
                        if (stk.empty() || stk.top() != tagName) {
                            isLegal = false;
                            break;
                        }
                        stk.pop();
                    }
                    else
                        if (tag.back() != '/')
                            stk.push(split[0]);
                }
                else {
                    isLegal = false;
                    break;
                }
            }
            else
                idx++;
        }
        if (stk.empty() && isLegal) cout << "legal\n";
        else cout << "illegal\n";
    }
    return 0;
}