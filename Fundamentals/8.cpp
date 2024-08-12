#include<iostream>
using namespace std;
void fib(int n){
  int f = 0;
  int s = 1 ;
  for(int i=0;i<n;i++){
    cout<<f<<" ";
    int t = f + s ;
    f = s ;
    s = t;
  }
}
int main()
{
  int n;
  cout<<"Enter the number : ";
  cin>>n;
  cout<<"Fibonacci series of "<<n<<endl;
  fib(n);
  return 0;
}