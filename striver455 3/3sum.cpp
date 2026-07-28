#include<iostream>
using namespace std;
int main(){
    int arr[]={2,-2,0,-3,3,5};
    int n= sizeof(arr)/sizeof(arr[0]);
    int target;
    cout<<"enter target";
    cin>>target;
    for(int i=0; i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(arr[i]+arr[j]+arr[k]==target){
                   
                    cout<<arr[i]<< " "<<arr[j]<<" "<<arr[k]<<endl;


                }
            }
        }
    }
    return 0;
}