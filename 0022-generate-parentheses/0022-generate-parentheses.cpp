class Solution {
public:
    vector<string> ans;

    void solve(int open, int close, int n, string temp) {
        // Base case
        if (open == n && close == n) {
            ans.push_back(temp);
            return;
        }

        // Add '('
        if (open < n) {
            temp.push_back('(');
            solve(open + 1, close, n, temp);
            temp.pop_back();
        }

        // Add ')'
        if (close < open) {
            temp.push_back(')');
            solve(open, close + 1, n, temp);
            temp.pop_back();
        }
    }

    vector<string> generateParenthesis(int n) {
        solve(0, 0, n, "");
        return ans;
    }
};