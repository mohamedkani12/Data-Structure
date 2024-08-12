#include<iostream>
#include<cmath>
using namespace std;
int main(){
  int number ;
  cout<<"Enter the number : ";
  cin>>number;
  int temp = sqrt(number);
  if(temp*temp==number){
    cout<<"Perfect Square";
  }
  else{
    cout<<"Not Perfect Square";
  }
  return 0;
}