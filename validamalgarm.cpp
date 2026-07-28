#include<iostream>
using namespace std;
int main(){
    string s1,s2;
    s1="anagram";
    s2="nagaram";
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    if(s1==s2){
        cout<<"true";

    }
    else{
        cout<<"false";
    }

}