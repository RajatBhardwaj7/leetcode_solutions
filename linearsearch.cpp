#include<iostream>
using namespace std;
int main(){
    int arr[]={7,6,8,4,12,34,21,67,90,9};
    int n= sizeof(arr)/sizeof(arr[0]);
    int target = 9;
    for(int i=0;i<=n;i++){
        if(arr[i]!=target){
            continue;
        }
        else if(arr[i]==target){
            cout<<"founded"<<endl;
        }
        else{
            cout<<"not founded"<<endl;
        }

    }
    
}