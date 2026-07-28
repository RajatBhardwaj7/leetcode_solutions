#include<iostream>
using namespace std;
int sorted(int arr[],int n){
    int first = arr[0];
    for(int i=0;i<n-1;i++){
        if (arr[i]>arr[i+1])
        return false;
    }
        return true;

}
int main(){
    int arr[]={1,1,3,4,5,6,7};
    int n= sizeof(arr)/sizeof(arr[0]);
    int ss= sorted(arr,n);
    cout<<ss<<endl;

}