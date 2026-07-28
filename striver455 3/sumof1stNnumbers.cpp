#include<iostream>
using namespace std;
int sumof(int n){
    if(n==0){
        return 0;
    }
    return n + sumof(n-1);
}
int main(){
    int n=8;
    
    cout<<sumof(n)<<endl;
    return 0;
}