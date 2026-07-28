#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3};
    int n= sizeof(arr)/sizeof(arr[0]);
    int count=0;
    int k=3;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum+=arr[j];
            if(sum==k){
                count++;
            }
        }
    }
    cout<<count;
}