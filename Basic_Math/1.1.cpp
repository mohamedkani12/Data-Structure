#include<iostream>
using namespace std;
int count(int n){
  string x=to_string(n);
  return x.length();
}
int main()
{
  int n;
  cout<<"Enter a number: ";
  cin>>n;
  cout<<count(n);
  return 0;
}