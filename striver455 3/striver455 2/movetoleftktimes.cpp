#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    int n= sizeof(arr)/sizeof(arr[0]);
    if(n==0){
        return 0;
    }
    int d=4;
     d =d%n;
    int temp[n];
    
    for(int i=0;i<n;i++){
        temp[i]=arr[(i+d)%n]; 
    }
    for(int i=0;i<n;i++){
        cout<<temp[i]<<" ";
    }
    return 0;
}//new array bana k kara h