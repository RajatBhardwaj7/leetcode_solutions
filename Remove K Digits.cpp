#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<char>s;
    string str="541892";
    int k=4;
    for(int i=str.length()-1;i>=0;i--){
        s.push(str[i]);
    }
    while (k!=0&&!s.empty()){
        s.pop();
        k--;

    }
    while(!s.empty()){
        cout<<s.top();
        s.pop();
    }
    
    return 0;
}