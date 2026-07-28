#include<iostream>
using namespace std;
int main(){
    int nums[]={1, 2, 2, 4, 3, 1, 4};
    int n=sizeof(nums)/sizeof(nums[0]);
    int ans=0;
    for(int i=0;i<n;i++){
        ans=ans^nums[i];
    }
    cout<<ans;
    return 0;
}