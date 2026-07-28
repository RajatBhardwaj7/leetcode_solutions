#include<iostream>
using namespace std;
int main(){
    int arr[]={1,3,4,5,6};
    int n= sizeof(arr)/sizeof(arr[0]);
    int sum=0;
    int sumof=0;
    
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    
    for(int i=1;i<=n+1;i++){//n+1 is liye hua coz ek element insert hoga na
        sumof=sumof+i;
    }
   cout<<sumof-sum;

}