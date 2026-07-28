#include<iostream>
using namespace std;
//arr={1,1,2,3,3,4,4}
//use linear search 
int main(){
    int i=0;
    
    int arr[]={1,1,2,3,3,4,4};
    int n= sizeof(arr)/sizeof(arr[0]);
    for(i<0;i<n;i++){
        if(arr[i-1]==arr[i]||arr[i]==arr[i+1])
        continue;
        else if (arr[i-1]!=arr[i]||arr[i]!=arr[i+1]){
            cout<<arr[i];
        }
        

    }




    return 0;
}