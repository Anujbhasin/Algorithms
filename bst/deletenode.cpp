#include<iostream>
using namespace std;


class Node{
public:
  int data;
  Node *left;
  Node *right;


  Node(int d){
    data=d;
    left=right=NULL;
  }


};



Node *insertinBST(Node *root,int d){
  if(root==NULL){
    root=new Node(d);
    return root;
  }
  //otherwise

  if(d<root->data){
    root->left=insertinBST(root->left,d);
  }
  else{
    root->right=insertinBST(root->right,d);
  }

  return root;
}



Node* buildTree(Node *root){

  Node *root=NULL:
  int d;
  cin>>d;

  while(d!=-1){
    root=insertinBST(root,d);
    cin>>d;
  }
  return root;


}
//print
void preorder(Node *root){
  //base case
  if(root==NULL){
    return;
  }
  //rec case
  cout<<root->data<<" ";
  preorder(root->left);
  preorder(root->right);
}


Node *removeNode(Node *root,int key)
{
  if(){
  return NULL;
  }

if(root->data==key){

}
else if(key<root->data){

}

}





int main(){
  Node *root =NULL;
  root = buildTree(root);
  preorder(root);
}
