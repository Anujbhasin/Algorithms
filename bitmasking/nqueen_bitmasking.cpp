#include<iostream>
using namespace std;

int nqueenbits(int n,int row,int ld,int rd){
  //base case

  int DONE=(1<<n)-1;

  if(row==DONE){
    return 1;
  }

  int pos=DONE&(~(row|ld|rd));

  int ans=0;

  while(pos>0){
    int p = pos&(-pos);

    pos-=p;
    ans+=nqueenbits(n,row|p,(ld|p)<<1,(rd|p)>>1);
  }

  return ans;


}

int main(){
  int n;
  cin>>n;


  cout<<nqueenbits(n,0,0,0)<<endl;






  return 0;
}
