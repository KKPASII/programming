#include <iostream>
#include <string>
#define SIZE 3
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string num_str[SIZE];
    for (int i = 0; i < SIZE; i++)
        cin >> num_str[i];
    cout << stoi(num_str[0]) + stoi(num_str[1]) - stoi(num_str[2]) << '\n';
    string answer = ""; answer = num_str[0] + num_str[1];
    cout << stoi(answer) - stoi(num_str[2]);
    return 0;
}