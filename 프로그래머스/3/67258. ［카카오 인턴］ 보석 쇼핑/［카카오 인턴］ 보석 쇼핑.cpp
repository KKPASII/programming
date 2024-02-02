#include <string>
#include <vector>
#include <set>
#include <algorithm>
#include <unordered_map>
using namespace std;

vector<int> solution(vector<string> gems) {
    vector<int> answer(2);
    unordered_map<string, int> select_gems;
    set<string> kind(gems.begin(), gems.end());
    
    int start = 0, end = 0, minLen;
    int kind_size = kind.size(), gems_size = gems.size();
    
    for (auto& g : gems) {
        select_gems[g]++;
        if (select_gems.size() == kind_size) break;
        end++;
    }
    minLen = end - start;
    answer[0] = start + 1; answer[1] = end + 1;
    
    while (1) {
        string pop_gem = gems[start];
        select_gems[pop_gem]--; start++;
        
        if (select_gems[pop_gem] == 0) {
            end++;
            for (; end < gems_size; end++) {
                select_gems[gems[end]]++;
                if (pop_gem == gems[end])
                    break;
            }
            if (end == gems_size) break;
        }
        
        if (end - start < minLen) {
            minLen = end - start;
            answer[0] = start + 1; answer[1] = end + 1;
        }
    }
    return answer;
}