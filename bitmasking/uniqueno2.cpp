#include<iostream>
using namespace std;

void unique2(int *arr,int n){
  int xor_res=0;

  for(int i=0;i<n;i++){
    xor_res = xor_res^arr[i];
  }

  int temp = xor_res;
  int j=0;
  while((temp&1)!=1){

    j++;

  temp=temp>>1;
}
int mask = (1<<j);
int a=0;
  for(int i=0;i<n;i++){
    if((arr[i]& mask)>0){
      a=a^arr[i];
    }
  }

  int b =xor_res^a;
  cout<<a<<" and "<<b<<endl;
}


int main(){
  int arr[]={1,2,3,4,4,5,2,1,7,3};

  int n=sizeof(arr)/sizeof(int);

  unique2(arr,n);
}
