#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    int count =0;
    int n=abs(num);
    if (n==0){
        count=1;
    }
    else{
        while(n!=0){
            n=n/10;
            count++;
        }
    }
    cout<<count<<endl;
        
}
