#include<iostream>
using namespace std;
int main(){
    stack<int> s;
    int arr[]={3,4,2,7,5,8,10,6};
    int n= sizeof(arr)/sizeof(arr[0]);
    int k;
    cin>>k;
    int count=0;
    for(int i=n-1;i>=0;i--){
        s.push(arr[i]);
    }
    while(!s.empty()){
        if(s.top()>arr[k]){
            count++;
            s.pop();
        }
        else{
            s.pop();
        }
    }
    cout<<count;
   
    

    }
