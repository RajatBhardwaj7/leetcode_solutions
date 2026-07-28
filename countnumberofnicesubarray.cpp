#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,5,6,9};
    int n= sizeof(arr)/sizeof(arr[0]);
    int count =0;
    for(int i=0;i<n;i++){
        int odd=0;
        for(int j=i;j<n;j++){
            if(arr[j]%2!=0){
                odd++;

            }
            if(odd==1){
                count++;
            }
        }
    }
    cout<<count;

}