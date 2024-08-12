#include<bits/stdc++.h>
using namespace std;
/*int majorityelem(int arr[],int n)
{
  for(int i=0;i<n;i++)
  {
    int cnt=0;
    for(int j=0;j<n;j++)
    {
      if(arr[i]==arr[j])
        cnt++;
    }
    if(cnt>n/2)
      return arr[i];
  }
  return -1;
}*//*
int majorityelem(int arr[],int n)
{
  map<int,int> mp;
  for(int i=0;i<n;i++)
  {
    mp[arr[i]]++;
  } 
  for(auto it:mp)
  {
    if(it.second>n/2)
      return it.first;
  }
  return -1;
}*/
int majorityelem(int arr[],int n)
{
  int cnt=0;
  int elem;
  for(int i=0;i<n;i++)
  {
    if(cnt==0)
    {
      cnt=1;
      elem=arr[i];
    }
    else if(arr[i]==elem)
      cnt++;
    else 
      cnt--;
  }
  int cnt1=0;
  for(int i=0;i<n;i++)
  {
    if(elem==arr[i])
      cnt1++;
  }
  if(cnt1>n/2)
  {
    return elem;
  }
  return -1;
}
int main()
{
  int n;
  cout<<"enter array size: ";
  cin>>n;
  int arr[n];
  cout<<"Enter array elements: ";
  for(int i=0;i<n;i++)
    cin>>arr[i];
  cout<<"Majority element : "<<majorityelem(arr,n);
  return 0;
}