#include<iostream>
using namespace std;
int main(){
  int a,b;
  cout<<"Enter two number : ";
  cin>>a>>b;
  int ans=0;
  int min = a<b?a:b;
  while(min>=2){
    if(a%min==0 && b%min==0)
    {
      ans=min;
      break;
    } ;
    min--;
  }
  cout<<"GCD of Two number "<<a<<" & "<<b<<" is "<<ans;
  return 0;
}