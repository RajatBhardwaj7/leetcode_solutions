#include<iostream>
#include<stack>
using namespace std;
int main(){
    int arr[]={1,2,3,-4,-2};
    int n= sizeof(arr)/sizeof(arr[0]);
    stack<int>s;
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            s.push(arr[i]);
        }
        else{
            while(!s.empty()&&s.top()>0&&s.top()<abs(arr[i])){
                s.pop();
            }
            if(!s.empty()&&s.top()==abs(arr[i])){
                s.pop();
            }
            else if(s.empty()||s.top()<0){
                s.push(arr[i]);
            }
        }
    }
   stack<int>temp;
   while(!s.empty()){
    temp.push(s.top());
    s.pop();
    
   }
   while(!temp.empty()){
    cout<<temp.top()<<" ";
    temp.pop();
   }
}