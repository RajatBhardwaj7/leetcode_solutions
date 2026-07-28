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
    void checkpalindrome(){
        Node* start=head;
        Node* end=tail;
        while(start!=end&&start->prev!=end){
            if(start->data!=end->data){
                cout<<"not palindrome";
                return ;
            }
            start=start->next;
            end=end->prev;
        }
        cout<<"palindrome";
    }
};
int main(){
    List ll;
    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(2);
    ll.push_front(3);
    ll.push_front(4);
    ll.checkpalindrome();
    return 0;
}