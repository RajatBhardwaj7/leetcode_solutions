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
    
void createLoop() {
    if(head && head->next && head->next->next)
        tail->next = head->next; 
}
int findlength(Node*slow,Node*fast){
    int count=1;
    fast=fast->next;
    while(slow!=fast){
        count++;
        fast=fast->next;
    }
    cout<<count;
    return count;

}
 int checkloop(){
        Node* slow=head;
        Node* fast=head;
       while(fast!=NULL&&fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){
            return findlength(slow,fast);
        }

       }
       return 0;
        
        
    }
};
int main(){
   
    List ll;
    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);
    ll.push_front(4);
    ll.push_front(5);
    ll.createLoop();
    ll.checkloop();
    return 0;
    
}