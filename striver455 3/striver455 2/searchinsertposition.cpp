#include<iostream>
using namespace std;
int main(){
    int arr[]={1,3,5,6};
    int n= sizeof(arr)/sizeof(arr[0]);
    int target ;
    cin>>target;
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=target){
        count++;
        }
        else {
            break;
        }
    

    }
    cout<<count;
    return 0;
}