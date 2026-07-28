#include<iostream>
using namespace std;
int main(){
    int arr[]={4,5,6,7,0,1,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    int target = 0;
    int low =0;
    int high = n-1;
    int ans = -1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]==target){
            ans=mid;
            break;


        }
        else if(arr[mid]>=arr[low]){
            if(target>=arr[low]&& target<arr[mid]){
                high= mid-1;

            }
            else{
                low=mid +1;
            }
        }
        else{
            if(target>arr[mid]&& target<=arr[high]){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
    }
    cout<<ans;
}