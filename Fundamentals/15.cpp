#include<iostream>
using namespace std;
int main(){
  int base,exp;
  cout<<"Base number : ";
  cin>>base;
  cout<<"Exponent number : ";
  cin>>exp;
  int pow = 1 ;
  for(int i = 0 ; i <exp;i++){
    pow = pow * base;
  }
  cout<<"Answer is "<<pow;
  return 0;
}