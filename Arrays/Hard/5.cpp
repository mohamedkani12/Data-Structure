#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void lcs(vector<int> arr,int n)
{
  unordered_map<int,int> mp;
  int maxi=0;
  int sum=0;
  for(int i=0;i<n;i++)
  {
    sum+=arr[i];
    if(sum==0)
    {
      maxi=i+1;
    }
    else{
      if(mp.find(sum)!=mp.end())
      {
        maxi=max(maxi,i-mp[sum]);
      }
      else{
        mp[sum]=i;
      }
    }
  }
  cout<<"Longest Subarray size: "<<maxi;
}
int main()
{
  int n;
  cout<<"enter array size : ";
  cin>>n;
  vector<int> arr;
  for(int i=0;i<n;i++)
  {
    int num;
    cin>>num;
    arr.push_back(num);
  }
  lcs(arr,n);
  return 0;
}