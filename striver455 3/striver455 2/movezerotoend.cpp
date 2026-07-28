#include<iostream>
using namespace std;
int main(){
    int arr[]={1,3,0,9,0,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    int i=0;
    for(int j=0;j<n;j++){
        if(arr[j]!=0){
            swap(arr[j],arr[i]);
            i++;

        }

    }
    for(int j=0;j<n;j++){
        cout<<arr[j]<<" ";
    }
}