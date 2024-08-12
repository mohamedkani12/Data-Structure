#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
  int number;
  cout<<"enter the number  : ";
  cin>>number;
  int sum = 0;
  int dig  = 0;
  while(number>0){
    int rem = number % 10;
    sum=(sum*10)+rem;
    number=number/10;
    dig++;
  }
  cout<<"Reverse number : "<<right<<setfill('0')<<setw(dig)<<sum;
  return 0;
}