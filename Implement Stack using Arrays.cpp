#include<iostream>
#include<stack>
using namespace std;
class stack1{
    int arr[100];
    int top1;
    public:
    stack1(){
        top1=-1;
    }
    void push(int x){
        if(top1>=99){
            cout<<"stack is full"<<endl;
        }
        else{
            top1++;
            arr[top1]=x;
        }
    }
    void pop(){
        if (top1==-1){
            cout<<"kuch ni h"<<endl;
        }
        else{
            top1--;
        }
    }
    int top(){
        if(top1==-1){
            cout<<"stack is empty"<<endl;
            return -1;
        }
        else{
            return arr[top1];
        }
        
    }
    int size(){
        return top1+1;
    }

};
int main(){
    stack1 s;
    s.push(5);
    s.push(10);
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;
    cout<<s.size()<<endl;
    return 0;



}