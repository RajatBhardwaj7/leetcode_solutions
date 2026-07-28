#include<iostream>
using namespace std;
void bubblesort(int arr[],int n){
    for (int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }

    }
}
void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int n=7;
    int arr[]={1,5,7,3,2,4,0};
    bubblesort(arr,n);
    cout<<arr[n-1];
}
