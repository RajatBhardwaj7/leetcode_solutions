#include<iostream>
#include<stack>
using namespace std;
void insertAtBottom(stack<int> &s,int x){
    if(s.empty()){
        s.push(x);
        return;

    }
    int top=s.top();
    s.pop();
    insertAtBottom(s,x);
    s.push(top);
}
void reverseStack(stack<int> &st) {
    if(st.empty()) return;
    int top = st.top();
    st.pop();
    reverseStack(st);
    insertAtBottom(st, top);
}
int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    cout << "Original stack (top to bottom): ";
    stack<int> temp = st;
    while(!temp.empty()) {
        cout << temp.top() << " ";
        temp.pop();
    }
    cout << endl;

    reverseStack(st);

    cout << "Reversed stack (top to bottom): ";
    while(!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
}


