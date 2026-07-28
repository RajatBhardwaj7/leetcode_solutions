#include <iostream>
using namespace std;
class Node {
public:
    int data;
    Node* next;
    Node* prev;

    Node(int val) {
        data = val;
        next = prev = NULL;
    }
};

// Define Stack class
class Stack {
    Node* head;
    Node* tail;

public:
    Stack() {
        head = tail = NULL;
    }

    void push(int val) {
        Node* newNode = new Node(val);
        if (head == NULL) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

    void pop() {
        if (tail == NULL) {
            cout << "Stack Underflow\n";
            return;
        }
        Node* temp = tail;
        if (head == tail) {
            head = tail = NULL;
        } else {
            tail = tail->prev;
            tail->next = NULL;
        }
        delete temp;
    }

    int top() {
        if (tail == NULL) {
            cout << "Stack is empty\n";
            return -1; // or throw exception
        }
        return tail->data;
    }

    bool isEmpty() {
        return head == NULL;
    }

    void display() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

// Main function
int main() {
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);

    s.display(); // Output: 10 20 30
    cout << "Top: " << s.top() << endl; // Output: 30

    s.pop();
    s.display(); // Output: 10 20

    cout << "Top after pop: " << s.top() << endl; // Output: 20
    cout << (s.isEmpty() ? "Stack is empty" : "Stack is not empty") << endl;

    return 0;
}
