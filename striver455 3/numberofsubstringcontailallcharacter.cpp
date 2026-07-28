#include<iostream>
using namespace std;
int main(){
    string s="abcba";
    int n=s.length();
    int count=0;
    for(int i=0;i<n;i++){
        int hash[26]={0};
        for(int j=i;j<n;j++){
            hash[s[j]-'a']=1;
            if(hash[0]+hash[1]+hash[2]==3){
                count++;
            }
        }
    }
    cout<<count;
    return 0;
}