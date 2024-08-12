#include<iostream>
#include<bits/stdc++.h>
using namespace std;
/*void subarray(vector<int> &arr,int n,int m)
{
  int cnt=0;
  for(int i=0;i<n;i++)
  {
    for(int j=i;j<n;j++)
    {
      int sum=0;
      for(int k=i;k<=j;k++){
        sum+=arr[k];
      }
      if(sum==m)
        cnt++;
    }
  }
  cout<<"subarray count : "<<cnt;
}*/
/*
void subarray(vector<int> &arr,int n,int m)
{
  int cnt=0;
  for(int i=0;i<n;i++)
  {
    int sum=0;
    for(int j=i;j<n;j++)
    {
      sum+=arr[j];
      if(sum==m)
        cnt++;
    }
  }
  cout<<"Subarray count: "<<cnt;
}*/
void subarray(vector<int> &arr,int n,int k)
{
  unordered_map<int,int> mpp;
  int presum=0,cnt=0;
  mpp[0]=1;
  for(int i=0;i<n;i++)
  {
    presum+=arr[i];
    int remove=presum-k;
    cnt+=mpp[remove];
    mpp[presum]+=1;
  }
  cout<<"subarray count : "<<cnt;
}
int main()
{
  int n;
  cout<<"Enter the array size: ";
  cin>>n;
  cout<<"Enter the array elements: ";
  vector<int> arr;
  for(int i=0;i<n;i++)
  {
    int num;
    cin>>num;
    arr.push_back(num);
  }
  cout<<"Enter K element : ";
  int k;
  cin>>k;
  subarray(arr,n,k);
  return 0;
}