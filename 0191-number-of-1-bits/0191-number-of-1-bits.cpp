class Solution {
public:
    int hammingWeight(int n) {
        int count = 0;
        string res = "";
        while (n >0) {
            if (n % 2 == 1) {
                res += '1';

            } else {
                res += '0';
            }
           n= n / 2;
        }
        int k = res.length();
        for (int i = 0; i < k; i++) {
            if (res[i] == '1') {
                count++;
            }
        }
        return count;
    }
};