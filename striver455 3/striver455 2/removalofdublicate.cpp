#include<iostream>
#include<set>
using namespace std;
int dublicate(int arr[],int n){
    set<int>s;
    for(int i=0;i<n;i++){
        s.insert(arr[i]);
    }
    for(auto er:s){
        cout<<er<<" ";
    }
}
int main(){
    int arr[]={1,1,2,2,3,3,3,4,5,7,7};
    int n= sizeof(arr)/sizeof(arr[0]);
    dublicate(arr,n);
}