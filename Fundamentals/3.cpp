#include<iostream>
using namespace std;
void swap(int *p,int *q){
  int temp;
  temp = *p;
  *p = *q;
  *q = temp;
}
int main(){
  int a,b;
  cout<<"Enter two numbers : ";
  cin>>a>>b;
  cout<<"Before Swapping : "<<a<<" & "<<b<<endl;
  swap(&a,&b);
  cout<<"After  Swapping : "<<a<<" & "<<b;
  return 0;
}