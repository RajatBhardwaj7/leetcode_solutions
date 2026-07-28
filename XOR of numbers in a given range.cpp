#include<iostream>
using namespace std;
int main(){
    int l=1;
    int r=3;
    int xor1=0;
    for(int i=l;i<=r;i++){
         xor1 ^=i;
    }
    cout<<xor1;
    return 0;

}