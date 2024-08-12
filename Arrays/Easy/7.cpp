#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void removezeros(int arr[],int n)
{
  vector<int> temp;
  for(int i=0;i<n;i++)
  {
    if(arr[i]!=0)
      temp.push_back(arr[i]);
  }
  int nz=temp.size();
  for(int i=0;i<nz;i++)\
  {
    arr[i]=temp[i];
  }
  for(int i=nz;i<n;i++)
  {
    arr[i]=0;
  }
}
void removezeros1(int arr[],int n)
{
  int j=-1;
  for(int i=0;i<n;i++)
  {
    if(arr[i]==0)
    {
      j=i;
      break;
    }
  }
  for(int i=j+1;i<n;i++)
  {
    if(arr[i]!=0)
    {
      swap(arr[i],arr[j]);
      j++;
    }
  }
}
int main()
{
  int n;
  cout<<"Enter an array size :";
  cin>>n;
  int arr[n];
  cout<<"Enter array elements with 0 include : ";
  for(int i=0;i<n;i++)
    cin>>arr[i];
  removezeros(arr,n);
  for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
  cout<<"\nUsing optimal approach";
  int arr1[n];
  cout<<"\nEnter 2nd array elements with 0 included : ";
  for(int i=0;i<n;i++)
    cin>>arr1[i];
  removezeros1(arr1,n);
  for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
  return 0;
}