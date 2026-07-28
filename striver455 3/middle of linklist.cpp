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
class doublyList{
    Node* head;
    Node* tail;
    public:
    doublyList(){
        head=tail=NULL;
    }
    void push_front(int val){
        Node* newNode = new Node(val);
        if(head==NULL){
            head=tail=newNode;

        }else{
            newNode->next=head;
            head->prev=newNode;
            head=newNode;
        }
    }
    void middle(){//slow fast approach
        Node* slow=head;
        Node* fast=head;
        while(fast!=NULL&&fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        cout<<slow->data;

    }
};
int main(){
    doublyList dll;
    dll.push_front(1);
    dll.push_front(2);
    dll.push_front(3);
    dll.push_front(4);
    dll.push_front(5);
    dll.push_front(6);
    dll.middle();
    return 0;


}
