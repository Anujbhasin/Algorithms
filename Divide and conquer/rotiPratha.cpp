#include<iostream>
#include<bits/stdc++.h>
using namespace std;



bool canCook(int p,int c,int *rank,int mid){

  int tp=0;
  int num_cook=1;

  for(int i=0;i<=c;i++){

    int t=0;
    int p=0;
    int j=1;

    while(t<=mid){
      p++;
      t=t+rank[i]*p;
    }

  }
  tp=tp+p;

  if(tp>=p){
    return true;
  }

  else{
    return false;
  }








}





int main(){


  int pratha;
  int cook;
  int rank[100];
  int mid;
  int ans=0;



  cin>>pratha;
  cin>>cook;

  for(int i=0;i<cook;i++){
    cin>>rank[i];
  }

  int s=0;

  int fastTime=0;

  sort(rank,rank+cook);

  //fastTime=rank[0]*(pratha)*(pratha+1)/2;
//  for(int i=0;i<=pratha;i++){
  //  fastTime=fastTime+rank[];

  //}

  //int e=fastTime;
  int e=10000000;


  while(s<=e){
    mid=(s+e)/2;

    if(canCook(pratha,cook,rank,mid)){
      ans=mid;
      s=mid+1;
    }
    else{
      e=mid-1;
    }
  }
  cout<<ans;





 return 0;





}
