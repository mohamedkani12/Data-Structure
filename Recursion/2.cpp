#include<iostream>
using namespace std;
void f(int i,int n){
  if(i>n)
  {
    return;
  }
  cout<<i<<" ";
  f(i+1,n);
}
int main()
{
  int n;
  cout<<"How many numbers : ";
  cin>>n;
  f(1,n);
  return 0;
}