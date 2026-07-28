#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    Node(int val){
        data=val;
        next=NULL;
        prev=NULL;
    }
};
class List{
    Node*head;
    Node* tail;
    public:
    List(){
        head=tail=NULL;
    }
    void push_front(int val){
        Node* newNode= new Node(val);
        if(head==NULL){
            head=tail=newNode;
        }
        else{
            newNode->next=head;
            head->prev=newNode;
            head=newNode;
        }
    }
    void deletemiddle(){
        Node* slow=head;
        Node* fast=head;
        Node* prev=NULL;
        if(head==NULL){
            cout<<"empty"<<endl;
            return ;
        }
        if(head->next==NULL){
            head=NULL;
            tail=NULL;
            return;
        }
        while(fast!=NULL&&fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        prev=slow->prev;
        prev->next=slow->next;
        delete slow;
    }
    void printll() {
        Node* temp = head;
        while(temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

};
int main() {
    List ll;
    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);
    ll.push_front(4);
    ll.push_front(5);
    ll.deletemiddle();
     
    ll.printll();
    return 0;
}