#include<iostream>
using namespace std;
int main(){
    int arr[]={4,2,2,6,4};
    int n= sizeof(arr)/sizeof(arr[0]);
    int k=6;
    int count=0;
    for(int i=0;i<n;i++){
        int xorsum=0;
        for(int j=i;j<n;j++){
            xorsum=xorsum^arr[j];
            if(xorsum==k){
                count++;
            }
        }
       
    }
    cout<<count;
    return 0;


}
//xor ekdam logic gate ki tarah hota h
