#include<iostream>
using namespace std;
class convertmintomax {
    public :
    int *arr;
    int size;
    convertmintomax(int a[],int n){
        arr=a;
        size=n;
    }
    void convert(){
        for(int i=0;i<=(size-2)/2;i++){
            int left=2*i+1;
            int right=2*i+2;
            if(left<size && arr[i]<arr[left]){
                swap(arr[i],arr[left]);
            }
            if(right<size && arr[i]<arr[right]){
                swap(arr[i],arr[right]);
            }
        }
    }
    void printarray(){
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
int main(){
    int arr[]={10, 20, 30, 21, 23};
    convertmintomax h(arr, 5);//ham yai h aise hi dete h

    h.convert();
    h.printarray();
    
    return 0;
}