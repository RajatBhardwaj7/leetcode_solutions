#include<iostream>
using namespace std;
int main(){
    string str="rajat";
    string str2="rajaT";
    reverse(str.begin(),str.end());
    if (str==str2){
        cout<<"palindrome"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
}//palindrome