#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    Node(int val){
        data=val;
        next=NULL;
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
        Node* newNode = new Node(val);
        if (head==NULL){
            head=tail=newNode;
        }
        else{
            newNode->next=head;
            head=newNode;
        }

    }
    int search(int key){
        Node* temp=head;
        int idx=0;
        while(temp!=NULL){
            if(temp->data==key){
                cout<<"mil gya"<<idx;
                return idx;
            }
            temp=temp->next;
            idx++;

        }
        return -1;

    }

};
int main(){
    List ll;
    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(4);
    ll.push_front(3);
    ll.search(4);
    return 0;
}