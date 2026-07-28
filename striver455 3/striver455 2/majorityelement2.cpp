#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,1,1,3,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<n;j++){
            if(arr[j]==arr[i]){
                count++;
            }
            if(count>n/3){
                cout<<arr[i];
                return 0;

            }

        }

    }
}