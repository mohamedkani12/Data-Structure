#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void bruteforce(int arr[],int n)
{
  sort(arr,arr+n);
  cout<<"Largest Element in array : "<<arr[n-1]<<endl;
}
void optimum(int arr[],int n)
{
  int Largest=arr[0];
  for(int i=0;i<n;i++)
  {
    if(Largest<arr[i])
    {
      Largest=arr[i];
    }
  }
  cout<<"Largest Element in array : "<<Largest;
}
int main()
{
  int n;
  cout<<"Enter array size : ";
  cin>>n;
  cout<<"Enter array Elements  :";
  int arr[n];
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  cout<<"Using Brute Force Approach\n";
  bruteforce(arr,n);
  cout<<"using Optimal Approach\n";
  optimum(arr,n);
  return 0;
}