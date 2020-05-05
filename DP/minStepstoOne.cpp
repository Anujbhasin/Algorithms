#include<iostream>
#include<climits>
using namespace std;


//topdown

int minSteps(int n,int dp[]){
  if(n==1){
    return 0;
  }
  //rec case
  int op1,op2,op3;

  op1=op2=op3=INT_MAX;
  op1=minSteps(n-1,dp);
  op2=n%2==0? minSteps(n/2,dp):INT_MAX;
  op3=n%3==0?minSteps(n/3,dp):INT_MAX;

  int ans=min(op1,min(op2,op3))+1;

  return dp[n]=ans;
}
//bottomup

int minStepUB(int n){
  int dp[100]={0};
  dp[1]=1;
  int op1,op2,op3;

  for(int i=2;i<=n;i++){

    if(i%3==0){
      op3=dp[i/3];
    }
    else{
      op3=INT_MAX;
    }
    if(i%2==0){
      op3=dp[i/2];
    }
    else{
      op2=INT_MAX;
    }
    op1=dp[i-1];

    int ans=min(op1,min(op2,op3))+1;
    dp[i]=ans;

  }

  return dp[n];
}



int main() {

  int dp[100]={0};
  int n;
  cin>>n;

  cout<<minSteps(n,dp)<<endl;

  cout<<minStepUB(n);




return 0;

}
