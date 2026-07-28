#include<iostream>
using namespace std;
int main(){
    string str;
    string str2;
    cin>>str;
    str2=str;
    reverse(str.begin(),str.end());
    if (str==str2){
        cout<<"palindrome"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
}//palindrome