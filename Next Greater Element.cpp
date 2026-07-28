#include<iostream>
using namespace std;
int main(){
    stack<int> s;
    int arr[]={10,5,3,7,8,12,9};
    int n= sizeof(arr)/sizeof(arr[0]);
    int ans[n];
    for(int i=n-1;i>=0;i--){
        while(!s.empty()&&s.top()<=arr[i]){
            s.pop();
        }
        if(s.empty()){
            ans[i]=-1;

        }
        else{
            ans[i]=s.top();
        }
        s.push(arr[i]);

    }
    for(int val:ans){
        cout<<val<<" ";
    }
    return 0;

}