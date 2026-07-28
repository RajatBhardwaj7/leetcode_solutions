#include<iostream>
using namespace std;
class Maxheap{
    int *arr;
    int size;
    int total_size;
    public:
    Maxheap(int n){
        arr=new int[n];
        size=0;
        total_size=n;
    }
    void insert(int val){
        if(size==total_size){
            cout<<"overflow"<<endl;
            return;
        }
        
            arr[size]=val;
            int index=size;
            size++;
        
        while(index>0&&arr[(index-1)/2]<arr[index]){
            swap(arr[(index)],arr[(index-1)/2]);
            index=(index-1)/2;
        }
    }
    void print(){
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
            
        }
    }
    void deleteheap(int n){
        if(size==0){
            cout<<"heap under flow"<<endl;
            return ;
        }
        arr[0]=arr[size-1];//last wala replace kar deta h
        size--;
        if(size==0){
            return;
        }

    }
    void heapify(int index){
        int largest=index;
        int left=2*index+1;
        int right=2*index+2;
        if(left<size&&arr[left]>arr[largest]){
            largest=left;
        }
        if(right<size&&arr[right]>arr[largest]){
            largest=right;
        }
        if(largest!=index){
            swap(arr[largest],arr[index]);
            heapify(largest);
        }
    }
};
int main(){
    Maxheap h(5);
    h.insert(15);
    h.insert(134);
    h.insert(12);
    h.insert(1);
    h.insert(100);
    h.print();
    h.insert(200); 
}