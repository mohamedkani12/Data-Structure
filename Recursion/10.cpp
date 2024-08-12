#include<iostream>
using namespace std;
int f(int n)
{
  if(n==0)
    return 0;
  else
    return n+f(n-1);
}
int main(){
  int n;
  cout<<"Enter N value : ";
  cin>>n;
  cout<<"Sumn : "<<f(n);
  return 0;
}