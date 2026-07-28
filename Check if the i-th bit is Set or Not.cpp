#include<iostream>
using namespace std;
int main(){
    int a=10;//1010
    int b=1;
    if ((a & (1<<b))!=0){
        cout<<"set bit"<<endl;
    }
    else{
        cout<<"not set"<<endl;
    }
}
// set if bit is 1 , ni toh 0