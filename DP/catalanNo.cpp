#include<iostream>
using namespace std;

int catlonNO(int n){
  if(n==0){
    return 1;
  }
  int subProb = catlonNO(n-1);

  return n*subProb;
}

int main() {

  int n;

  cin>>n;

  int num=catlonNO(2*n);
  int den=catlonNO(n)*catlonNO(n);

  int ans=num/den;

  int finalAns=ans/(n+1);


  cout<<finalAns;



return 0;

}
