#include<iostream>
using namespace std;
int isarmstrong(int n){
    int original=n;
    int sumofcube=0;
    while(n!=0){
        int last=n%10;
        sumofcube=sumofcube +(last*last*last);
        n=n/10;
    }
    return sumofcube==original;
}
int main(){
    int n;
    cin>>n;
    if(isarmstrong(n)){
        cout<<"armstrong"<<endl;
    }
    else{
        cout<<"not armstrong "<<endl;
    }
    return 0;
}