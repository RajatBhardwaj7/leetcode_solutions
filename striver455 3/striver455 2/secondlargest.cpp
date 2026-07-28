#include<iostream>
using namespace std;
int secondlargest(int arr[] ,int n){
    int largest = arr[0];
    int seclargest=INT_MIN;//integer ko b sambhal leta h
    for(int i=0;i<n;i++){
        if (arr[i]>largest){
            seclargest=largest;
            largest = arr[i];

        }
        else if(arr[i]>seclargest && arr[i]<largest){
            seclargest =arr[i];
        }
    }
    return seclargest;

}
int main(){
    
    int arr[]={2,4,6,-8,0,1,3,5,7,9};
    int n= sizeof(arr)/sizeof(arr[0]);
    int ss=secondlargest(arr,n);
    cout<<ss<<endl;
    return 0;


}