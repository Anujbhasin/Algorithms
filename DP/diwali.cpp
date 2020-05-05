#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int diwali(int n,int k,int i,int csum,int prev){
int  mod=pow(10,6)+3;
int dp[101][101][3]={0};
  if(i==n){
    if(csum==k){
      return 1;
    }
    return 0;
  }

  if(dp[i][csum][prev]!=-1){
    return dp[i][csum][prev];
  }

  int ans=0;
  if(prev==1){
    ans=diwali(n,k,i+1,csum+1,1);
    ans=ans%mod;

  }
  else{
    ans=diwali(n,k,i+1,csum,1);
    ans=ans%mod;
  }


     ans=ans+diwali(n,k,i+1,csum,0);
      ans=ans%mod;

  return dp[i][csum][prev]=ans;
}

int main() {

  cout<<diwali(10,9,0,0,0);





return 0;

}
