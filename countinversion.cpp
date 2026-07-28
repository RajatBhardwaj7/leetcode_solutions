#include<iostream>
using namespace std;
int main(){
    int arr[]={-10, -5, 6, 11, 15, 17};
    int n= sizeof(arr)/sizeof(arr[0]);
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                count++;
            }
        }
    }
    cout<<count;
    return 0;
}