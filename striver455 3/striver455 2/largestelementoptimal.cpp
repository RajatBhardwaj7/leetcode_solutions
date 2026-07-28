#include<iostream>
using namespace std;

int largestelement(int arr[], int n){
    int largest = arr[0];
    for(int i=1; i<n; i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
    }
    return largest;
}

int main(){
    int n=7;
    int arr[]={4,5,2,1,6,9,0};

    cout  << largestelement(arr, n) << endl;

    return 0;
}
