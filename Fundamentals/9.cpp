#include<iostream>
using namespace std;
int main()
{
  int decimal;
  cout<<"Enter the number : ";
  cin>>decimal;
  string binary;
  while(decimal>0){
    int rem = decimal % 2;
    binary = to_string(rem)+binary;
    decimal = decimal / 2 ;
  }
  cout<<binary;
  return 0;
}