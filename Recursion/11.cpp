#include<iostream>
using namespace std;
int f(int n){
  if(n<=1)  return n;
  int last=f(n-1);
  int seclast=f(n-2);
  return last+seclast;
}
void f1(int n)
{
  int f[n+1];
  if(n==0)  cout<<0;
  else if(n==1) cout<<0<<" "<<1;
  else{
    f[0]=0;
    f[1]=1;
    for(int i=2;i<=n;i++)
    {
      f[i]=f[i-1]+f[i-2];
    }
  }
  for(int i=0;i<=n;i++)
  {
    cout<<f[i]<<" ";
  }
}
int main()
{
  int n;
  cout<<"Enter n Value : ";
  cin>>n;
  cout<<endl<<f(n);
  f1(n);
  return 0;
}