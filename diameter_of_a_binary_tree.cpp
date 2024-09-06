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
int Levels(Node* root){
    if(root==NULL) return 0;
    return 1+max(Levels(root->left),Levels(root->right));
}
void MAX(Node* root, int &maxdia){
     if(root==NULL) return;
     int dia =  Levels(root->left) +Levels(root->right);
      maxdia = max(maxdia,dia);
      MAX(root->left,maxdia);
      MAX(root->right,maxdia);
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
    int maxdia = 0;
    MAX(root,maxdia);
    cout<<maxdia<<endl;
    return 0;
}