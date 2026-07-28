#include<iostream>
#include<queue>
using namespace std;
int main(){
    priority_queue<int> q;
    q.push(3);
    q.push(7);
    q.push(2);
    while(!q.empty()){
        cout<<q.top()<<endl;
        q.pop();
    }
    
   
   
    return 0;
}//sab same h