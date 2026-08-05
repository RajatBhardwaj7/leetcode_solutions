class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        for (int i = 0; i < n ; i++) {
            sum += nums[i];
        }
        int cs = 0;
        for (int i = 0; i < n ; i++) {
            int ls = cs;
            int rs = sum - nums[i] - ls;
            if (ls == rs) {
                return i;
            }
            cs += nums[i];
        }
        return -1;
    }
};