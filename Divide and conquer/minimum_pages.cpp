#include<iostream>
#include<bits/stdc++.h>
using namespace std;


bool canRead(int n,int m,int *pages,int thresh){


  int students =1;
  int page=pages[0];

  for(int i=0;i<n;i++){

    int c_page=pages[i];
    if(c_page-page>=thresh){
      students++;
      page=c_page;

      if(students>n){
        return false;
      }
      else{

      }

      }
    }
    return false;
}



int main(){

  int pages[100];
  int n,i,m;
  int mid;
  int ans=0;
  int sum=0;

  cin>>n;
  cin>>m;

  for(i=0;i<n;i++){
    cin>>pages[i];
  }

  int s=pages[n-1];

  for(int i=0;i<n;i++){
    sum=sum+pages[i];
  }
  int e=sum;



  while(s<=e){

    mid=(s+e)/2;

    if(canRead(n,m,pages,mid)){

      ans=mid;
      s=mid+1;

    }
    else{
      e=mid+1;
    }

  }
  cout<<ans;

return 0;

  }
