#include<iostream>
using namespace std;
int main(){
  int number;
  cout<<"Enter the number : ";
  cin>>number;
  
  for(int i=1;i<=number/2;i++){
    if((number/i)==i)
    {
      cout<<"Square root of "<<number<<" is "<<i;
      return 0;
    }
  }
  cout<<"No Square root of "<<number;
  return 0;
}