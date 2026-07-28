#include<iostream>
using namespace std;
//inorder(left root right)
//preorder(root left right)
//post order(left right root)
struct node{
    int data;
    node *left;
    node*right;
    node(int val){
        data=val;
        left = NULL;
        right=NULL;

    }
};
void inorder(node*root){
    if(root==NULL)return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void preorder(node*root){
    if(root==NULL)return;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(node*root){
    if(root==NULL)return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";

}
int main() {
    // Creating the tree
    node* root = new node(1);
    root->left = new node(3);
    root->right = new node(4);
    root->left->left = new node(5);
    root->left->right = new node(2);
    root->right->left = new node(7);
    root->right->right = new node(6);

    cout << "Pre-order: ";
    preorder(root);
    cout << endl;

    cout << "In-order: ";
    inorder(root);
    cout << endl;

    cout << "Post-order: ";
    postorder(root);
    cout << endl;

    return 0;
}