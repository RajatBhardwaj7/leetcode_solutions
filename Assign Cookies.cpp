#include <iostream>
using namespace std;
void sorting(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
void assign(int arr[],int greed[],int n,int m){
    n=sizeof(arr)/sizeof(arr[0]);
   m=sizeof(arr)/sizeof(arr[0]);
   int l=0;
   int r=0;
   while(l<m && r<n){
    if(arr[l]<=greed[r]){
        r=r+1;
    }
    l=l+1;
   }
   cout<<r;
}
int main(){
    int arr[]={1,2,3};
    int greed[]={1,1};
    sorting(arr,3);
    sorting(greed,2);
    assign(arr,greed,3,2);
    return 0;
}