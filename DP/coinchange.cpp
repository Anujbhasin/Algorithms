#include<iostream>
#include<climits>
using namespace std;


//topDown

int minCoinChange(int coins[],int m,int n,int *dp){
  //base

  if(n==0){
    return 0;
  }

  if(dp[n]!=0){
    return dp[n];

  }


  //rec case

  int ans=INT_MAX;
  for(int i=0;i<m;i++){
    if(n>=coins[i]){
      int ans1=minCoinChange(coins,m,n-coins[i],dp)+1;

      ans=min(ans,ans1);


    }

  }
  return dp[n]=ans;

}


//bottomup

int minCoinChangeBU(int coins[],int m,int N){
  int dp[100]={0};
  for(int n=1;n<=N;n++){
    int ans=INT_MAX;
    for(int j=0;j<N;j++){
      if(n-coins[j]>=0){
        int ans1=dp[n-coins[j]]+1;
        ans=min(ans,ans1);
      }
    }
    dp[n]=ans;
  }
  return dp[m];

}







int main() {

  int coins[]={1,7,10};


  int n=15;
  int m=3;
  int dp[100]={0};


  cout<<minCoinChange(coins,m,n,dp);

  cout<<minCoinChangeBU(coins,m,n);



return 0;

}
