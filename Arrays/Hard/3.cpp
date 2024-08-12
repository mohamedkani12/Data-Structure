#include<iostream>
#include<bits/stdc++.h>
using namespace std;
/*
void threeSum(vector<int> arr,int n)
{
  set<vector<int>> st;
  for(int i=0;i<n;i++)
  {
    for(int j=i+1;j<n;j++)
    {
      for(int k=j+1;k<n;k++)
      {
        if(arr[i]+arr[j]+arr[k]==0)
        {
          vector<int> temp={arr[i],arr[j],arr[k]};
          sort(temp.begin(),temp.end());
          st.insert(temp);
        }
      }
    }
  }
  vector<vector<int>> ans(st.begin(),st.end());
  for(auto it:ans)
  {
    for(auto i:it)
    {
      cout<<i<<" ";
    }
    cout<<endl;
  }
}*/
/*void threeSum(vector<int> nums,int n)
{
  set<vector<int>> st;
  for(int i=0;i<n;i++)
  {
    set<int> hashset;
    for(int j=i+1;j<n;j++)
    {
      int third=-(nums[i]+nums[j]);
      if(hashset.find(third)!=hashset.end())
      {
        vector<int> temp={nums[i],nums[j],third};
        sort(temp.begin(),temp.end());
        st.insert(temp);
      }
      hashset.insert(nums[j]);
    }
  }
  vector<vector<int>> ans(st.begin(),st.end());
  for(auto it:ans)
  {
    for(auto i:it)
    {
      cout<<i<<" ";
    }
    cout<<endl;
  }
}*/
void threeSum(vector<int> nums,int n)
{
  vector<vector<int>> ans;
  sort(nums.begin(),nums.end());
  for(int i=0;i<n;i++){
    if(i>0 && nums[i]==nums[i-1]) continue;
    int j=i+1;
    int k=n-1;
    while(j<k)
    {
      int sum=nums[i]+nums[j]+nums[k];
      if(sum<0) j++;
      else if(sum>0) k--;
      else{
        vector<int> temp={nums[i],nums[j],nums[k]};
        ans.push_back(temp);
        j++;
        k--;
        while(j<k && nums[j]==nums[j-1]) j++;
        while (j<k && nums[k]==nums[k+1]) k--;
      }
    }
  }
  for(auto it:ans)
  {
    for(auto i:it)
    {
      cout<<i<<" ";
    }
    cout<<endl;
  }
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
  threeSum(arr,n);
  return 0;
}