#include<iostream>
using namespace std;
//700017777
int main(){
    int arr[]={7,0,0,1,7,7,7,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        int count=0;//yai loop k andar hi declare hoga kuki baar bar value reset hogi
        for(int j=0;j<n;j++){
            if(arr[j]==arr[i]){
                count++;
            }
            if(count>n/2){
                cout<<arr[i];
                return 0;
            }
        }
        
    }



}