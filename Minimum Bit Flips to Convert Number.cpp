#include<iostream>
using namespace std;
int main(){
    int start=10;
    int goal=7;
    int count=0;
    int setbit=start^goal;
    for(int i=0;i<32;i++){
        if((setbit & (1<<i))!=0){
            count++;
        }
    }
    cout<<count;

    return 0;
}