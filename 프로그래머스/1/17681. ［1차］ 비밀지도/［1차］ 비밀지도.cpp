#include <string>
#include <vector>
using namespace std;

string toBinary(int num, int n) {
    string binary = "";
    for (int i = n-1; i >= 0; i--) {
        if (num & (1 << i))
            binary += "1";
        else
            binary += "0";
    }
    return binary;
}

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer(n);
    for (int i = 0; i < n ; i++) {
        int combined_num = arr1[i] | arr2[i];
        string binary = toBinary(combined_num, n);
        string ans = "";
        for (const char& bin : binary) {
            if (bin == '1')
                ans += "#";
            else
                ans += " ";
        }
        answer[i] = ans;
    }
    return answer;
}