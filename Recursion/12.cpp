#include<iostream>
using namespace std;
int main()
{
  int n;
  cout<<"Enter array size : ";
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++) 
    cin>>arr[i];
  for(int i=0;i<n/2;i++)
  {
    int f=arr[i];
    int l=arr[n-i-1];
    arr[i]=l;
    arr[n-1-i]=f;
  }
  for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
  return 0;
}