#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
     int data;
     Node* left;
     Node* right;
     Node(int data){
        this->data = data;
        left =NULL;
        right = NULL;
     }
};
void helper(Node* root){
    if(root==NULL) return;
    swap(root->left,root->right);
    helper(root->left);
    helper(root->right);
}
void display(Node* root){
    if(root==NULL) return;
    cout<<root->data<<" ";
    display(root->left);
    display(root->right);
}
int main(){
   Node* root = new Node(1);
   Node* a = new Node(2);
   Node* b = new Node(3);
   Node* c = new Node(4);
   Node* d = new Node(5);
   Node* e = new Node(6);
   Node* f = new Node(8);
   root->left = a;
   root->right = b;
   a->left = c;
   a->right = d;
   b->left = e;
   b->right = f;
   display(root);
   cout<<endl;
    helper(root);
    display(root);
    return 0;
}