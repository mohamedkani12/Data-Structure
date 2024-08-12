#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int linearsearch(int arr[],int n,int d)
{
  for(int i=0;i<n;i++)
  {
    if(arr[i]==d)
      return i+1;
  }
  return -1; 
}
int main()
{
  int n;
  cout<<"Enter array size : ";
  cin>>n;
  int arr[n];
  cout<<"Enter array elements : ";
  for(int i=0;i<n;i++)
    cin>>arr[i];
  int d;
  cout<<"Enter which element to found : ";
  cin>>d;
  cout<<"Element Found at index "<<linearsearch(arr,n,d);
  return 0;
}