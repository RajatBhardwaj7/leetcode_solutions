#include<iostream>
using namespace std;
int main(){
    int a=5;
    int b=10;
    cout<<a<<" "<<b<<endl;
    //swapping without 3rd variable
    a=a^b;
    b=a^b;
    a=a^b;
    cout<<a<<" "<<b;
    return 0;
}