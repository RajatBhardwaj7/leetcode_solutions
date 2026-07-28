#include<iostream>
using namespace std;
void stringtointeger(){
    string s;
    cin>>s;
    int n=s.length();
    int num=0;
    for(int i=0;i<n;i++){
        num=num*10+(s[i]-'0');
    
    }
}
int main(){
    stringtointeger();
    return 0;
}