#include<bits/stdc++.h>
using namespace std;
class Node{
public:
   int data;
   Node* left;
   Node* right;
   Node(int data){
        this->data = data;
        left = NULL;
        right = NULL;
   }
};
void displaytree(Node* root){
    if(root==NULL) return;
     cout<<root->data<<" ";
     displaytree(root->left);
     displaytree(root->right);
}
int main(){
    Node* a = new Node(1);
    Node* b = new Node(2);
    Node* c = new Node(3);
    Node* d = new Node(4);
    Node* e = new Node(5);
    Node* f = new Node(6);
    Node* g = new Node(7);
    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->right = g;
    c->left = f;
    displaytree(a);
    return 0;
}