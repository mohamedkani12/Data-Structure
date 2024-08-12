#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void numberonce1(int arr[],int n)
{
  int cnt;
  for(int i=0;i<n;i++)
  {
    int num=arr[i];
    cnt=0;
    for(int j=0;j<n;j++)
    {
      if(arr[j]==num)
        cnt++;
    }
    if(cnt==1)
      cout<<"\nOnce appeared number : "<<arr[i];
  }
}
void numberonce2(int arr[],int n)
{
  int max1=arr[0];
  for(int i=0;i<n;i++)
  {
    max1=max(max1,arr[i]);
  }
  int hash[max1+1]={0};
  for(int i=0;i<n;i++)
  {
    hash[arr[i]]++;
  }
  for(int i=1;i<n;i++)
  {
    if(hash[arr[i]]==1)
      cout<<"\nOnce appeared number : "<<arr[i];
  }
}
void numberonce3(int arr[],int n){
  map<int,int> mp;
  for(int i=0;i<n;i++)
  {
    mp[arr[i]]++;
  }
  for(auto it:mp)
  {
    if(it.second == 1)
      cout<<"\nOnce appeared number : "<<it.first;
  }
}
void numberonce4(int arr[],int n)
{
  int xor1=0;
  for(int i=0;i<n;i++)
  {
    xor1=xor1^arr[i];
  }
  cout<<"\nOnce appeared number : "<<xor1;
}
int main()
{
  int n;
  cout<<"Enter array size : ";
  cin>>n;
  cout<<"enter array elements : ";
  int arr[n];
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  numberonce1(arr,n);
  numberonce2(arr,n);
  numberonce3(arr,n);
  numberonce4(arr,n);
  return 0;
}