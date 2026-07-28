#include <iostream>
using namespace std;
int main(){
    int arr[]={4,5,3,2,7,88,1};
    int n= sizeof(arr)/sizeof(arr[0]);
    int largest = arr[0];
    for (int i=0;i<=n;i++){
        if(arr[i]>largest){
            largest=arr[i];
            cout<<arr[i]<<" ";
        }
    }
}