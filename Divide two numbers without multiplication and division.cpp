#include<iostream>
using namespace std;
int main(){
    int a=10;
    int b=5;
    int count=0;
    int sum=0;
    while(sum<=a){
        sum+=b;
        count++;
    }
    cout<<count-1;
}