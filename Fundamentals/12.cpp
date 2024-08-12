#include<iostream>
using namespace std;
int main()
{
  int  n;
  cout<<"Enter the number : ";
  cin>>n;
  int perfect = 0;
  for(int i=1;i<=n/2;i++){
    if(n%i == 0){
      perfect=perfect+i;
    }
  }
  if(perfect==n) {
    cout<<"It is a Perfect number ";
  }
  else{
    cout<<"Not a Perfect number ";
  }
  return 0;
}