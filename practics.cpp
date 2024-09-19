#include<bits/stdc++.h>
using namespace std;
class Node{
  public:
    int data;
    Node* left;
    Node* right;
    Node(int data){
       this->data = data;
       right = left = nullptr;
    }
};
void display(Node* root){
    if(root==nullptr) return;
    cout<<root->data<<" ";
    display(root->left);
    display(root->right);
}
int main(){
   Node* root = new Node(10);
   Node* a = new Node(20);
   Node* b = new Node(90);
   Node* c = new Node(38);
   Node* d = new Node(348);
   Node* e = new Node(78);
   Node* f = new Node(65); 
    root->left = a;
    root->right = b;
    a->left = c;
    a->right = d;
    b->left = e;
    b->right = f;
    display(root);
   return 0;
}