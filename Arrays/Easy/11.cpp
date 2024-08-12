#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void missing1(int arr[],int n)
{
  int flag;
  for(int i=1;i<=n;i++)
  {
    for(int j=0;j<n-1;j++)
    {
      flag=0;
      if(arr[j]==i)
      {
        flag=1;
        break;
      }
    }
    if(!flag)
    {
      cout<<"Missing Element is "<<i;
    }
  }
}
void missing2(int arr[],int n)
{
  int hash[n+1]={0};
  for(int i=0;i<n;i++)
  {
    hash[arr[i]]=1;
  }
  for(int i=1;i<=n;i++)
  {
    if(hash[i]==0)
      cout<<"Mising element : "<<i;
  }
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
  cout<<"Using brute force approach\n";
  missing1(arr,n);
  cout<<"\nusing better approach\n";
  missing2(arr,n);
  return 0;
}