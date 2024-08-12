#include<iostream>
using namespace std;
void missing1(int arr[],int n){
  int sum=(n*(n+1))/2;
  int s2=0;
  for(int i=0;i<n-1;i++)
    s2+=arr[i];
  int ans=sum-s2;
  cout<<"Missing element : "<<ans;
}
void missing2(int arr[],int n)
{
  int xor1=0,xor2=0;
  for(int i=0;i<n-1;i++)
  {
    xor2=xor2^arr[i];
    xor1=xor1^(i+1);
  }
  xor1=xor1^n;
  int ans=xor1^xor2;
  cout<<"\nMissing element : "<<ans;
}
int main()
{
  int n;
  cout<<"Enter array size : ";
  cin>>n;
  cout<<"Enter array elements: ";
  int arr[n-1];
  for(int i=0;i<n-1;i++)
    cin>>arr[i];
  missing1(arr,n);
  missing2(arr,n);
  return 0;
}