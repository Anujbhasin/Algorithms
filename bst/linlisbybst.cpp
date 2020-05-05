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

class LL{
public:
  Node*head;
  Node*tail;
}



LL tree2LL(Node *root){
    LL l;
    if(root==NULL){
      l.head=l.tail=NULL;

    }
    if(root->left==NULL && root->right==NULL){
      l.head=l.tail=NULL;
    }
    else if(root->left==NULL && root->right==NULL){
      LL rightLL=tree2LL(root->right);
      root->right=rightLL.head;
      l.head=root;


      
    }

  }


  root=



}





int main(){
  Node *root =NULL;
  root = buildTree(root);
  preorder(root);
}
