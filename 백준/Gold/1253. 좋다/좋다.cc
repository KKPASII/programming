#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int answer = 0;
	int n;
	cin >> n;
	vector<int> nums(n, 0);
	for (int i = 0; i < n; i++) {
		cin >> nums[i];
	}
	sort(nums.begin(), nums.end());

	for (int k = 0; k < n; k++) {
		int key = nums[k];
		int start = 0;
		int end = n - 1;

		while (start < end) {
			if (nums[start] + nums[end] == key) {
				if (start != k && end != k) {
					answer++;
					break;
				}
				else if (start == k) {
					start++;
                }
				else if (end == k) {
					end--;
                }
			}
			else if (nums[start] + nums[end] < key) {
				start++;
			}
			else {
				end--;
			}
		}
	}	
	cout << answer;
	return 0;
}