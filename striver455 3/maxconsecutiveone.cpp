#include<iostream>
using namespace std;
int main(){
    int arr[]={1,1,0,0,1,1,1,0};
    int count=0;
    int maxcount=0;
    int n= sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            count++;
            maxcount=max(maxcount,count); //update the max count
        }
        else if(arr[i]==0){
            count=0;
        }
       
    }
    cout<<maxcount;
    return 0;

}