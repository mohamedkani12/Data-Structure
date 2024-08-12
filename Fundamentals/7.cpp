#include<iostream>
using namespace std;
int main()
{
  int a,b;
  cout<<"Enter two number : ";
  cin>>a>>b;
  int max = a<b?b:a;
  int n = max;
  while(true){
    if(max%a==0 && max%b==0)
    {
      cout<<"LCM of Two number "<<a<<" & "<<b<<" is "<<max;
      return 1;
    }
    max+=n;
  }
  cout<<"No LCM of "<<a<<" & "<<b;
  return 0;
}