#include<iostream>
#include<cmath>
using namespace std;
int main()
{
  int binary;
  cout<<"Enter the binary number : ";
  cin>>binary;
  int decimal = 0 ;
  int i = 0;
  while(binary>0){
    int rem = binary%10;
    decimal = decimal + (rem * pow(2,i));
    i++;
    binary = binary / 10 ;
  }
  cout<<"Decimal number is "<<decimal;
  return 0;
}