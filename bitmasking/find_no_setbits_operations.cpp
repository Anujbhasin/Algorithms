#include<iostream>
using namespace std;

int cntsetbits(int n){
  int cnt=0;
  while(n>0){
    cnt=cnt+(n&1);
    n=n>>1;
  }

  return cnt;
}

int cntbitsfast(int n){
  int cnt=0;
  while(n>0){
    n=n&(n-1);
    cnt++;


  }
  return cnt;
}
int getIthbit(int n,int i){
  return (n>>i)&1;
}

void setIthbit(int &n,int i){

  n=(n|(1<<i));

}


int main(){
  int n;
  cin>>n;
  cout<<cntsetbits(n)<<endl;
  cout<<cntbitsfast(n)<<endl;
  cout<<getIthbit(n,1)<<endl;
  setIthbit(n,2);
  cout<<n;


  return 0;
}
