#include<iostream>
using namespace std;



class Node{
public:
  int parent;
  int rank;




int find(int i,Node* arr){
    if(i!= arr[i].parent){
      return find(arr[i].parent,arr);
    }
    return i;
  }


  void Union(int x,int y,Node* arr){
    int parent_x=find(x,arr);
    int parent_y=find(y,arr);
    if(arr[parent_x].rank<=arr[parent_y].rank){
      arr[parent_x].parent=parent_y;
      arr[parent_y].rank+=arr[parent_x].rank;
    }
    else{
      arr[parent_y].parent=parent_x;
      arr[parent_x].rank+=arr[parent_y].rank;
    }
  }


};


int main() {

  


return 0;

}
