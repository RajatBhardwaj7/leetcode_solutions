#include<iostream>
using namespace std;
int main(){
    int arr[]={3,5,8,15,19};
    int n=sizeof(arr)/sizeof(arr[0]);
    int low =0;
    int high= n-1;
    int k=9;
    int ans=n;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]>=k){
            ans=mid;
            high=mid-1;
        }
        else{

            low=mid+1;
        }

    }
    cout<<ans;
    return 0;
}