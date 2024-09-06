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
int levels(Node* root){
      if(root==NULL) return 0;
       int ans = 1+max(levels(root->left),levels(root->right));
       return ans;
}
bool fun(Node* root){
     if(root==NULL) return true;
     int lst = levels(root->left);
     int rst = levels(root->right);
     int n = max(lst,rst)-min(lst,rst);
     if(n>1) return false;

     bool leftans = fun(root->left);
     if(leftans==false) return false;

     bool rightans = fun(root->right);
     if(rightans==false) return false;
     return true;
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
   int h=0;
    cout<<fun(root)<<endl;
   return 0;
}