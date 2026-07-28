#include<iostream>
using namespace std;
int main(){
    int arr[]={6,4,1,2,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>2*arr[j]){
                count++;

            }
        }
    }
    cout<<count;
    return 0;
}