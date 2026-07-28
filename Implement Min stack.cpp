//st.top().first → gives you the actual value pushed.
//st.top().second → gives you the minimum value so far when that element was pushed.
#include<iostream>
#include<stack>
using namespace std;
class minstack{
    stack<pair<int,int>>st;
    public:
    void push(int x){
        if(st.empty()){
            st.push({x,x});
        }
        else{
            st.push({x,min(x,st.top().second)});
        }
    }
    void pop(){
        if(!st.empty()){
            st.pop();
        }

    }
    int top(){
        if(!st.empty()){
            cout<< st.top().first<<endl;;
        }
        return -1;
    }
    int getmin(){
        if(!st.empty()){
            cout<<st.top().second<<endl;
        }
        return -1;
    }

};
int main(){
    minstack ms;
    ms.push(8);
    ms.push(7);
    ms.push(5);
    ms.top();
    ms.getmin();
    ms.pop();
    ms.getmin();
    return 0;
}
