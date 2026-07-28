#include<iostream>
#include<stack> //stack m ham for loop ni laga sikte
using namespace std;
int main(){
    stack<int>s;
    s.push(2);
    s.push(7);
    s.push(0);
    s.push(100);
    cout<<s.size()<<endl;//top();empty();pop();swap();emplace()
    // for(auto k: s ){
    //     cout<<k;
    // }
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();//agar yai add ni krte toh yai infinity loop ban jata

    }
    return 0;
    

}
