#include<iostream>
using namespace std;
int main(){
    int n=8;
   
    if(n>1 && (n&(n-1))==0){
        cout<<"power of 2";

    }
    else{
        cout<<"not power of 2";
    }
    return 0;

}