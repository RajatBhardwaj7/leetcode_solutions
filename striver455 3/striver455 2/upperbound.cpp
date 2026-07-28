#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,2,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    int low =0;
    int high= n-1;
    int k=2;
    int ans=n;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]>=k){
            ans=mid;
            low=mid+1;
        }
        else{
            high=mid-1;

        }

    }
    cout<<ans;
    return 0;
}