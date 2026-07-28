#include<iostream>

using namespace std;
int main(){
    stack<int>s;
    s.push(3);
    s.push(8);
    s.push(9);
   
    stack<int> s2;
    s2.swap(s);
    cout<<s.size()<<endl;;
    cout<<s2.size();
    return 0;
}