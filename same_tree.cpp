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
bool isSame(Node* p,Node* q){
     //base case 
      if(p==NULL && q==NULL) return true;
       if(p==NULL && q!=NULL) return false;
       if(p!=NULL && q==NULL) return false;


     if(p->data!=q->data) return false;  //root

     int lst = isSame(p->left,q->left);  //left subtree
     if(lst==false) return false;
      
       int rst = isSame(p->right,q->right);
       if(rst==false) return false;     //right subtree
        
         return true;
}
int main(){
    //p tree
    Node* p = new Node(1);
    Node* b = new Node(2);
    Node* c = new Node(3);
    Node* d = new Node(4);
    Node* e = new Node(5);
    Node* f = new Node(6);
    Node* g = new Node(7);
    p->left = b;
    p->right = c;
    b->left = d;
    b->right = e;
    c->right = g;
    c->left = f;
    //q tree
  Node* q = new Node(1);
    Node* bc = new Node(2);
    Node* cc = new Node(3);
    Node* dc = new Node(4);
    Node* ec = new Node(5);
    Node* fc = new Node(6);
    Node* gc = new Node(7);
    q->left = bc;
    q->right = cc;
    bc->left = dc;
    bc->right = ec;
    cc->right = gc;
    cc->left = fc;
   cout<<isSame(p,q)<<endl;
    return 0;
}