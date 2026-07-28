#include<iostream>
using namespace std;
void checker(string s){
    int min=0;
    int maxi=0;
    for(int i=0; i<s.length();i++){
        if(s[i]=='('){
            min++;
            maxi++;
        }
        else{
            min--;
            maxi--;
        }
        if(maxi<0){
            cout<<"false";
            return;
        }
        min=max(0,min);
    }
    if(min==0){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}
int main(){
    string s= "()()";
    checker(s);
    return 0;
}