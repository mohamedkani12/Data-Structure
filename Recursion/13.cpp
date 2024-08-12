#include<iostream>
using namespace std;
int f(int n)
{
  if(n==0)
    return 1;
  return n*f(n-1);
}
int main()
{
  int n;
  cout<<"Enter Factorial number : ";
  cin>>n;
  int ans=f(n);
  cout<<"Factorial of "<<n<<" is "<<ans;
  return 0;
}