#include<iostream>
using namespace std;
void f(int i,int sum)
{
  if(i<1)
  {
     cout<<"Sum : "<<sum;
     return ;
  }
  else 
    f(i-1,sum+i);
}
int main()
{
  int n;
  cout<<"Enter n Value : ";
  cin>>n;
  f(n,0);
  return 0;
}