class Solution {
public:
    vector<int> intersection(vector<int>& num1, vector<int>& num2) {
        vector<int> ans;
        sort(num1.begin(),num1.end());
        sort(num2.begin(),num2.end());
        for(int i=0;i<num1.size();i++){
            for(int j=0;j<num2.size();j++){
                if(num1[i]==num2[j]){
                    if(ans.empty()||ans.back()!=num1[i]){
                        ans.push_back(num1[i]);
                    }
                    break;
                }
              
            }
        }
        return ans;
    }
};