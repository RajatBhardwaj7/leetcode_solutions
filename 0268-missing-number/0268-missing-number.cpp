class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int actual=0;
        int exp=0;
        int n= nums.size();
            exp= n*(n+1)/2;
        for(int i=0;i<n;i++){
            actual+=nums[i];
        }
        return exp-actual;
    }
};