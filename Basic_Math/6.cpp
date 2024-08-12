#include<iostream>
using namespace std;
void gcd(int n1,int n2){
  int ans=1;
  for(int i=min(n1,n2);i>=1;i--)
  {
    if(n1%i==0 && n2%i==0)
    {
      ans=i;
      break;
    }
  }
  cout<<"GCD of two number : "<<ans;
}
int gcd1(int n1,int n2){
  while(n1>0 && n2>0)
  {
    if(n1>n2) n1=n1%n2;
    else  n2=n2%n1;
  }
  if(n1==0) return n2;
  else return n1;
}
int rgcd(int a,int b){
  if(b==0)
    return a;
  return rgcd(b,a % b);
}
int main(){
  int n1,n2;
  cout<<"Enter 2 number : ";
  cin>>n1>>n2;
  gcd(n1,n2);
  cout<<endl<<"GCD of two number : "<<gcd1(n1,n2);
  cout<<"\nRecursive Method ";
  cout<<endl<<"GCD of two number : "<<rgcd(n1,n2);
  return 0;
}