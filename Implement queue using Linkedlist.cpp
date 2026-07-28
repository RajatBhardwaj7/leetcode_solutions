#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

class Queue {
    Node* start; // front
    Node* end;   // rear
    int size;

public:
    Queue() {
        start = end = NULL;
        size = 0;
    }

    void push(int val) {
        Node* temp = new Node(val);
        if (start == NULL) {
            start = end = temp;
        } else {
            end->next = temp;
            end = temp;
        }
        size++;
    }

    void pop() {
        if (start == NULL) {
            cout << "Queue is empty" << endl;
            return;
        }
        Node* temp = start;
        start = start->next;
        delete temp;
        size--;
        if (start == NULL) end = NULL; // if queue becomes empty
    }

    int top() {
        if (start == NULL) {
            cout << "Queue is empty" << endl;
            return -1;
        }
        return start->data;
    }

    int getsize() {
        return size;
    }
};

int main() {
    Queue q;
    q.push(5);
    q.push(10);
    cout << q.top() << endl;  // Output: 5
    q.pop();
    cout << q.top() << endl;  // Output: 10
    cout << q.getsize() << endl;  // Output: 1
    return 0;
}
