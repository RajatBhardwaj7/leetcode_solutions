#include<iostream>
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

class List {
    Node* head;
    Node* tail;
public:
    List() {
        head = tail = NULL;
    }

    void push_front(int val) {
        Node* newNode = new Node(val);
        if(head == NULL) {
            head = tail = newNode;
        } else {
            newNode->next = head;
            head = newNode;
        }
    }

    void printll() {
        Node* temp = head;
        while(temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

    void removed(int x) {   // take x as a parameter
        if(head == NULL) {
            cout << "List is empty" << endl;
            return;
        }

        // case 1: if head node is to be deleted
        if(head->data == x) {
            Node* temp = head;
            head = head->next;
            delete temp;
            if(head == NULL) tail = NULL; // if list becomes empty
            return;
        }

        // case 2: search in the list
        Node* prev = head;
        Node* curr = head->next;
        while(curr != NULL) {
            if(curr->data == x) {
                prev->next = curr->next;
                if(curr == tail) tail = prev; // update tail if last node is deleted
                delete curr;
                return;
            }
            prev = curr;
            curr = curr->next;
        }

        cout << "Element " << x << " not found!" << endl;
    }
};

int main() {
    int x;
    List ll;
    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);
    ll.push_front(4);
    ll.push_front(5);
    ll.push_front(6);

    ll.printll();

    cout << "Enter value to delete: ";
    cin >> x;

    ll.removed(x);
    ll.printll();

    return 0;
}
