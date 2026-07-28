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
        Node* newNode= new Node(val);
        if(head==NULL){
            head=tail=newNode;
        }else{
            newNode->next=head;
            head->prev=newNode;
            head=newNode;
        }
    }
    void printll(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<"<->";
            temp=temp->next;

        }
        cout<<"NULL";
    }
    void pop_front(){
        if(head==NULL){
            cout<<"list is empty"<<endl;
            return;
        }else{
            Node* temp=head;
            head=head->next;
            if (head!=NULL){
                head->prev=NULL;

            }else{
                tail=NULL;

            }

        }
    }
};
int main(){
    doublyList dll;
    dll.push_front(1);
    dll.push_front(1);
    dll.push_front(1);
    dll.push_front(1);
    dll.pop_front();
    dll.printll();
    return 0;

}