#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data=val;
        next=NULL;

    }
};
class List{
    Node*head;
    Node*tail;
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
            head=newNode;
        }
    }
    void pop_front(){
        if(head==NULL){
            cout<<"list is empty"<<endl;
            return ;
        }
        else{
            Node* temp=head;
            head=head->next;
            temp->next=NULL;
            delete temp;
        }
    }
    void pop_back(){
        if(head==NULL){
            cout<<"list is empty"<<endl;
            return ;
        }
        else{
            Node* temp=head;
            while(temp->next->next==NULL){
                temp=temp->next;
            }
            temp->next=NULL;
            delete tail;
            tail=temp;
        }
    }
    void push_back(int val){
        Node* newNode= new Node(val);
        if(head==NULL){
            head=tail=newNode;
        }
        else{
            tail->next=newNode;
            tail=newNode;
        }
    }
    void printll(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<"-> ";
            temp=temp->next;
        }
        cout<<"null"<<endl;
    }
};
int main(){
    List ll;
    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);
    ll.push_back(4);
    ll.pop_front();
    ll.printll();
    ll.pop_back();
    return 0;
}