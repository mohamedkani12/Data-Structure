#include<iostream>
using namespace std;
int main()
{
  int n;
  cout<<"Enter the number :";
  cin>>n;
  int i = n;
  while(i>0){
    int fact = 1;
    while(n>0){
      fact = fact * n;
      n=n-1;
    }
    cout<<"Factorials of "<<i<<"! : "<<fact<<endl;
    i=i-1;
    n=i;
  }
  return 0;
}