#include<iostream>
using namespace std;

int dp[10][10]={0};

int wines(int n,int arr[],int i,int j,int y){

  //base case
  if(i>j){
    return 0;
  }
  if(dp[i][j]!=0]){
    return dp[i][j];
  }
  //rec case
  int op1=arr[i]*y+wines(n,arr,i+1,j,y+1);
  int op2=arr[j]*y+wines(n,arr,i,j-1,y+1);
  return dp[i][j]=max(op1,op2);


}

int main() {
  int win[]={2,3,5,1,4};
  int n=5;
  cout<<wines(n,win,0,n-1,1);




return 0;

}
