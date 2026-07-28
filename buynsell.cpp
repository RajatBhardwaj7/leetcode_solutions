#include<iostream>
using namespace std;
int main(){
    int arr[]={10, 7, 5, 8, 11, 9};
    int n= sizeof(arr)/sizeof(arr[0]);
    int maxi=0;
    int mini=INT_MAX;
    for(int i=0;i<n;i++){
        mini= min(mini,arr[i]);
        maxi=max(maxi,arr[i]-mini);

    }
    cout<<maxi;
    return 0;
}