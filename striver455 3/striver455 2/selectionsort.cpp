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
void selectionsort(int arr[],int n){
    for(int i=0;i<n-1;i++){
       int  smallestnum=i;
       for(int j=i+1;j<n;j++){
        if (arr[j]<arr[smallestnum]){
            smallestnum=j;
           
        }
    }
    swap(arr[i],arr[smallestnum]);

    }
}
void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<< " ";
    }
    cout<<endl;
}
int main(){
    int n=5;
    int arr[]={5,4,2,3,1};
    selectionsort( arr, n);
    printarray(arr,n);

}//important