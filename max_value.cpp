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
int Max(Node* root){
    /*
    if(root==NULL)  return INT_MIN;
    int lst = Max(root->left);
    int rst = Max(root->right);
    return max(root->val,max(lst,rst));
    */
     if(root==NULL) return INT_MIN;
     return max(root->data,max(Max(root->left),Max(root->right)));
}
int main(){
    Node* a = new Node(1);
    Node* b = new Node(2);
    Node* c = new Node(13);
    Node* d = new Node(40);
    Node* e = new Node(5);
    Node* f = new Node(6);
    Node* g = new Node(70);
    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->right = g;
    c->left = f;
   cout<<Max(a)<<endl;
    return 0;
}