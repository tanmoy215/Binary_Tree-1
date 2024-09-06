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
int CalculateSum(Node* root){
    // if(root==NULL) return 0;
    // int lefttree  = CalculateSum(root->left);
    // int righttree = CalculateSum(root->right);
    // int ans = root->data + lefttree + righttree;
    // return ans;
    if(root==NULL) return 0;
    return root->data + CalculateSum(root->left)+CalculateSum(root->right);
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
   cout<< CalculateSum(a);
    return 0;
}