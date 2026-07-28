#include<iostream>
using namespace std;
void quicksort(int arr[],int left , int right){
    if (left>=right) return;
    int pvt=arr[left];
    int i= left +1;
    int j= right;
    while(i<=j){//matlb ek s jada element
        while (i<=right && arr[i]<=pvt) i++;
        while(j>=left && arr[j]>pvt)j--;
        if (i<j)swap(arr[i],arr[j]);


    }
    swap(arr[left],arr[j]);
    quicksort(arr,left,j-1);//kuki j pvt ban gya th na
    quicksort(arr,j+1,right);
}
void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}

int main(){
    int arr[]={3,4,7,1,8,0,6,5};
    int n= sizeof(arr)/sizeof(arr[0]);
    quicksort(arr,0,n-1);

    printarray(arr,n);
}

