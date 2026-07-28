
#include<iostream>
#include<stack>
using namespace std;

bool isbalanced(string s){
    stack<char> st;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
            st.push(s[i]);
        } else {
            if (st.empty()) return false;
            if ((s[i] == ')' && st.top() == '(') ||
                (s[i] == ']' && st.top() == '[') ||
                (s[i] == '}' && st.top() == '{')) {
                st.pop();
            } else {
                return false;
            }
        }
    }
    return st.empty();
}

int main(){
    string s = "{[()]}";
    cout << (isbalanced(s) ? "Balanced" : "Not Balanced") << endl;
    return 0;
}