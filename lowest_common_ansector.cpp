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
bool exist(Node* root,int target){
     if(root==NULL) return false;
     if(root->data==target) return true;
     return exist(root->left,target) || exist(root->right,target);
}
Node* helper(Node* root,int p,int q){
     if(root->data==p && root->data==q) return root;
     else if(exist(root->left,p) && exist(root->right,q)) return root;
   else if(exist(root->right,p) && exist(root->left,q)) return root;
   else if(exist(root->left,p) && exist(root->left,q)) helper(root->left,p,q);
   else helper(root->right,p,q);
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
    int p=6;
    int q=8;
     Node* ans = helper(root,p,q);
     cout<<ans->data<<endl;
    return 0;
}