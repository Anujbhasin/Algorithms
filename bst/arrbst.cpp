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

  Node* root=NULL;
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


Node *arr2bst(int a[],int s,int e){


  if(s>e){
    return NULL;
  }

  int mid=(s+e)/2;

  Node *root=new Node(a[mid]);

  root->left=arr2bst(a,s,mid-1);
  root->right=arr2bst(a,mid+1,e);
  return root;



}





int main(){
  Node *root =NULL;
  //root = buildTree(root);
int  a[]={1,2,3,4,5,6,7,8};
  int n= sizeof(arr)/sizeof(int);
  arr2bst(a,0,7);
  preorder(root);
}
