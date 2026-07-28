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
    void evenodd(){
        if(head==NULL||head->next==NULL){
            return;

        }
        for(Node*i=head;i!=NULL;i=i->next){
            for(Node*j=i->next;j!=NULL;j=j->next){
                if(i->data%2==0&&j->data%2!=0){
                    swap(i->data,j->data);
                }
            }
        }
        printll();


       
    }

};
int main(){
    List ll;
    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);
    ll.push_front(4);
    ll.push_front(5);
    cout<<"before"<<endl;
    ll.printll();
    cout<<"after"<<endl;
    ll.evenodd();
    return 0;

}