#include<iostream>
using namespace std;
int main(){
    queue<int> q;
    q.push(3);
    q.push(7);
    q.push(2);
    cout<<q.size()<<endl;
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
    q.pop();
    cout<<q.size()<<endl;
   
    return 0;
}