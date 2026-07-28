#include<iostream>
using namespace std;
int main(){
    queue<int> q;
    q.push(3);
    q.push(7);
    q.push(2);
    while(!q.empty()){
        cout<<q.front()<<endl;
        q.pop();
    }
    
   
   
    return 0;
}//sab same h