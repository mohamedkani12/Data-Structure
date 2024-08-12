#include<iostream>
using namespace std;
int factorial(int n){
  int fact = 1;
  while(n>0){
    fact = fact * n;
    n = n - 1 ;
  }
  return fact;
}
int main(){
  int n;
  cout<<"Enter the number : ";
  cin>>n;
  int sum = 0;
  int n1 = n;
  while(n1>0){
    int rem = n1%10;
    int fact = factorial(rem);
    sum = sum + fact ;
    n1=n1/10;
  }
  if(sum==n)
  {
    cout<<"It is a Strong number";
  }
  else{
    cout<<"Not a Strong number";
  }
  return 0;
}
// 1 2 145 40585 -> Strong number 
