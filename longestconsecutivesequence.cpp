#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int longestConsecutive(vector<int>& nums) {
    if (nums.empty()) 
    return 0;

    unordered_set<int> s(nums.begin(), nums.end());
    int longest = 0;

    for (int num : nums) {
        
        if (s.find(num - 1) == s.end()) {
            int currentNum = num;
            int length = 1;

            while (s.find(currentNum + 1) != s.end()) {
                currentNum++;
                length++;
            }

            longest = max(longest, length);
        }
    }

    return longest;
}

int main() {
    vector<int> nums = {100, 4, 200, 1, 3, 2};
    cout << longestConsecutive(nums) << endl; 
    return 0;
}
