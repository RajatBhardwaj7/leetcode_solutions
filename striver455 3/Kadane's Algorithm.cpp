#include<iostream>
using namespace std;
int main(){
    int arr[]={2, 3, 5, -2, 7, -4};
    int n= sizeof(arr)/sizeof(arr[0]);
    int maxsum=INT_MIN;
    for(int st=0;st<n;st++){
        int current=0;
        for(int end=st;end<n;end++){
            current+=arr[end];
            maxsum=max(current,maxsum);

        }
    }
    cout<<maxsum;
    return 0;
}