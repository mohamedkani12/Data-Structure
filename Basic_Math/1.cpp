#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int reverse(int num)
{
  int sum=0;
  while(num>0){
    int l=num%10;
    sum=(sum*10)+l;
    num/=10;
  }
  return sum;
}
int main()
{
  int num;
  cout<<"Enter the number : ";
  cin>>num;
  int count=0;
  while(num>0)
  {
    int lastdigit=num%10;
    cout<<lastdigit;
    num/=10;
    count++;
  }
  cout<<"\nTotal digit : "<<count;
  cout<<"\nAnother method of finding Digit  ";
  num=74590;
  count=(int)(log10(num)+1);
  cout<<endl<<num<<":"<<count;
  cout<<"\nReverse number of 123 : "<<reverse(123);
  return 0;
}