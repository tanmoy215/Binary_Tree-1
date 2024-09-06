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
void helper(vector<string>& str,string s,Node* root){
     if(root==NULL) return;
     string a = to_string(root->data);
     if(root->left==NULL && root->right==NULL){
        s+=a;
        str.push_back(s);
        return;
     }
     helper(str,s+a="->",root->left);
     helper(str,s+a+"->",root->right);
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
    vector<string> str;
    helper(str,"",root);
    for(int i=0;i<str.size();i++){
        cout<<str[i]<<endl;
    }
    return 0;
}