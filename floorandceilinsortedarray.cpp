#include<iostream>
using namespace std;
int main(){
    int arr[]={3,4,4,7,8,10};
    int n= sizeof(arr)/sizeof(arr[0]);
    int low=0;
    int high=n-1;
    int floor;
    int ceil;
    int k=5;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==k){
            floor==mid;
            break;
        }
        else if(arr[mid]<k){
            floor=mid;
            low=mid+1;
        }
        else{
            high=mid-1;
            
        }
    }
    cout<<arr[floor];
}