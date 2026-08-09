class Solution {
public:
    int hammingDistance(int x, int y) {
        int result;
        int n= x^y;
        
        while(n>0){
            result+=n&1;
            n=n>>1;
        }
        return result;


    }
};