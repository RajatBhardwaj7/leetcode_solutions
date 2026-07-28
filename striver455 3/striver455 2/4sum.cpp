#include<iostream>
using namespace std;
int main(){
    int arr[]={1,-2,3,5,7,9};
    int n= sizeof(arr)/sizeof(arr[0]);
    int target;
    cout<<"enter target";
    cin>>target;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                for(int l=k+1;l<n;l++){
                    if(arr[i]+arr[j]+arr[k]+arr[l]==target){
                        cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<" "<<arr[l]<<endl;

                    }
                }

            }
        }
    }
}