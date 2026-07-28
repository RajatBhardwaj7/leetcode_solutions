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
        Node* head;
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
    void createloop(){
        if(head&&head->next&&head->next->next){
            tail->next=head->next->next;
        }
    }
      bool checkloop(){
        int count=0;
        Node* slow=head;
        Node* fast=head;
        while(fast!=NULL&&fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            count++;
            if(slow==fast){
                cout<<count;
                return 1 ;
            }
        }
        return -1;
        
    }
    };
    int main(){
        List ll;
        ll.push_front(1);
        ll.push_front(2);
        ll.push_front(3);
        ll.push_front(4);
        ll.push_front(5);
        ll.push_front(6);
         ll.createloop();
        ll.checkloop();

        return 0;
    }