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
    void reverserecursion(){
        if(head==NULL||head->next==NULL){
            return;
            
            }
            else{
                Node* temp=head;
                head=head->next;
                reverserecursion();
                head->prev=temp;
                temp->next=head;
                temp->prev=NULL;
                tail=temp;

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

    };


int main(){
    doublyList dll;
    dll.push_front(1);
    dll.push_front(2);
    dll.push_front(3);
    dll.push_front(4);
    dll.reverserecursion();
    
    return 0;


}