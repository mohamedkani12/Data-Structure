#include<iostream>
using namespace std;
int main(){
  int number;
  cout<<"Enter number : ";
  cin>>number;
  string ans="";
  if(number%2==0){
    ans="Even";
  }
  else{
    ans="Odd";
  }
  cout<<"Check even or Odd : "<<ans;
  return 0;
}