#include<iostream>
#include<queue>
#include<stack>
using namespace std;
class Stack{
    queue<int> q;
    public:
    void push(int x){
        int s=q.size();
        q.push(x);
        for(int i=0;i<s;i++){
            q.push(q.front());
            q.pop();
        }


    }
    void pop(){
        if(q.empty()){
            cout<<"stack is empty"<<endl;
            return ;
        }
        q.pop();

    }
    int top(){
        if(q.empty()){
            cout<<"stack is empty"<<endl;
            return -1;
        }
        return q.front();

    }
};
int main(){
    Stack s;
    s.push(5);
    s.push(10);
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;
    return 0;
}