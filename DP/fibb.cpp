#include<iostream>
using namespace std;

//top down dp
int fib(int n,int*dp){
  if(n==0||n==1){\
  return n;
}
if(dp[n]!=0){
  return dp[n];
}
int ans=fib(n-1,dp)+fib(n-2,dp);
return dp[n]=ans;
}


//bottomup dp
int fibBU(int n){
  int dp[100]={0};
  dp[1]=1;
  for(int i=2;i<n;i++){
    dp[i]=dp[i-1]+dp[i-2];
  }
  return dp[n];
}




int main() {

  int dp[100]={0};

  int n;
  cin>>n;
  cout<<fib(n,dp);





return 0;

}
