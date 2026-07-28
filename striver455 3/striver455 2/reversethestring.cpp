#include<iostream>
using namespace std;
int main(){
    string s= "rajat bhardwaj";
    int n= s.length();
    string result ="";
    reverse(s.begin(),s.end());
    for(int i=0;i<n;i++){
        string word="";
        while(i<n &&s[i]!=' '){
            word+=s[i];
            i++;
        }
        reverse(word.begin(),word.end());
        if(word.length()>0){
            result+= " "+word;
        }

    }
    cout<<result.substr(1);
}