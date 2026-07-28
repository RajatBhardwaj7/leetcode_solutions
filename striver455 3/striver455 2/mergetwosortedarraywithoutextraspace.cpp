
#include<iostream>
using namespace std;
int main(){
    int arr1[]={1,4,8,10};
    int arr2[]={2,3,9};
    int n= sizeof(arr1)/sizeof(arr1[0]);
    int m= sizeof(arr2)/sizeof(arr2[0]);
    int left=n-1;
    int right=0;
    while (left >= 0 && right < m) {
        if (arr1[left] > arr2[right]) {
            swap(arr1[left], arr2[right]);
            left--, right++;
        }
        else {
            break;
        }
    }

    sort(arr1, arr1 + n);
    sort(arr2, arr2 + m);
    


}