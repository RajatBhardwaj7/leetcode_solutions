class Solution {
public:
    bool buddyStrings(string s, string goal) {

        if (s.length() != goal.length())
            return false;

        // Case 1: Strings are already equal
        if (s == goal) {

            unordered_set<char> st;

            for (char ch : s) {
                if (st.count(ch))
                    return true;   // Duplicate character found
                st.insert(ch);
            }

            return false;
        }

        // Case 2: Find differing positions
        vector<int> diff;

        for (int i = 0; i < s.length(); i++) {
            if (s[i] != goal[i]) {
                diff.push_back(i);
            }
        }

        if (diff.size() != 2)
            return false;

        return s[diff[0]] == goal[diff[1]] &&
               s[diff[1]] == goal[diff[0]];
    }
};