class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& arr) {
        int n = arr.size();

        vector<int> hash(n + 1, 0);
        vector<int> ans;

        for (int i = 0; i < n; i++) {
            hash[arr[i]] = 1;
        }

        for (int i = 1; i <= n; i++) {
            if (hash[i] == 0) {
                ans.push_back(i);
            }
        }

        return ans;
    }
};