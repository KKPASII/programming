#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> d, int budget) {
    int answer = 0;
    
    sort(d.begin(), d.end());
    int size = d.size();
    
    for (int i = 0; i < size; i++) {
        int dep_count =  0;  
        int sum = 0;
        for (int j = i; j < size; j++) {
            sum += d[j];
            dep_count++;
            if (budget < sum) {
                dep_count--;
                break;
            }
        }
        if (answer < dep_count) answer = dep_count;
    }
    return answer;
}