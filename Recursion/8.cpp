#include<iostream>
using namespace std;
bool f(int i,string s)
{
  int n=s.size();
  if(i>=n/2)
    return true;
  if(s[i]!=s[n-i-1])
    return false;
  return f(i+1,s);
}
int main()
{
  string s;
  cout<<"Enter String : ";
  getline(cin,s);
  int b=f(0,s);
  if(b==1)
    cout<<"The given String is Palindrome";
  else 
    cout<<"The given String is not Palindrome";
  return  0;
}