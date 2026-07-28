#include <iostream>
#include <stack>
using namespace std;

class Queue {
    stack<int> s1, s2;

public:
    void push(int x) {
        s1.push(x);
    }

    void pop() {
        if (s1.empty() && s2.empty()) {
            cout << "Queue is empty" << endl;
            return;
        }

        // Move elements from s1 to s2 only if s2 is empty
        if (s2.empty()) {
            while (!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }
        }

        s2.pop();
    }

    int top() {
        if (s1.empty() && s2.empty()) {
            cout << "Queue is empty" << endl;
            return -1;
        }

        // Move elements from s1 to s2 if needed
        if (s2.empty()) {
            while (!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }
        }

        return s2.top();
    }

    bool empty() {
        return s1.empty() && s2.empty();
    }
};

int main() {
    Queue q;
    q.push(5);
    q.push(10);
    q.push(15);

    cout << q.top() << endl; // 5 (first inserted)
    q.pop();
    cout << q.top() << endl; // 10
    q.pop();
    cout << q.top() << endl; // 15

    return 0;
}