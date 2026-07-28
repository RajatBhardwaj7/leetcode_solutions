#include<iostream>
using namespace std;
int main(){
    int arr[]={-1,3,2,4,7,6,9,10};
    int n= sizeof(arr)/sizeof(arr[0]);
    int low=0;
    int high = n-1;
    int target=6;
    while(low<=high){
        int mid= (low+high)/2;
        if(arr[mid]==target){
            return mid;

        }
        else if(arr[mid]<target){
            low=mid+1;

        }
        else{
            high=mid-1;
        }
    }
    return -1;

}


