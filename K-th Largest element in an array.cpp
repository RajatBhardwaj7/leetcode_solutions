#include<iostream>
using namespace std;
class kthlargest {
    public:
    int *arr;
    int size;
    kthlargest(int a[],int n){
        arr=a;
        size=n;
    }
        void maxify(int arr[],int n,int i,int k){
            int largest=i;
            int left=2*i+1;
            int right=2*i+2;
            if(left<n && arr[left]>arr[largest]){
                largest=left;
            }
            if(right<n && arr[right]>arr[largest]){
                largest=right;
            }
            if(largest!=i){
                swap(arr[i],arr[largest]);
                maxify(arr,n,largest,k);
            }
            for(int i=0;i<size;i++){
                if(i==k){
                    cout<<arr[i]<<" ";
                }
            }
            cout<<endl;

        }
};
int main(){
    int arr[]={1,2,3,4,5};
    kthlargest k(arr,5);
    k.maxify(arr,5,3,4);
    return 0;
}