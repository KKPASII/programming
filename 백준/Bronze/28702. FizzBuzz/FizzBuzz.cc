#include <iostream>
#include <string>
using namespace std;
#define SIZE 3
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string str_arr[SIZE];
    int num_idx = 0;
    int number;
    for (int i = 0; i < SIZE; i++) {
        cin >> str_arr[i];
        if (str_arr[i] != "Fizz" && str_arr[i] != "Buzz" && str_arr[i] != "FizzBuzz") {
            number = stoi(str_arr[i]);
            num_idx = i;
        }
    }
    number += 3 - num_idx;
    if (number % 3 == 0 && number % 5 == 0)
        cout << "FizzBuzz";
    else if (number % 5 == 0)
        cout << "Buzz";
    else if (number % 3 == 0)
        cout << "Fizz";
    else cout << number;
    return 0;
}