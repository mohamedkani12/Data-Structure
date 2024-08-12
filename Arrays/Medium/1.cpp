#include<iostream>
#include<bits/stdc++.h>
using namespace std;
/*
//Brute force approach
void twosum(vector<int>& arr,int target)
{
 int n=arr.size();
 int i,j;
 for(i=0;i<n;i++)
 {
  for(j=i+1;j<n;j++)
  {
    if(arr[i]+arr[j]==target)
    {
      cout<<"\nYes\n Answer: "<<i<<"&"<<j;
    }
  }
 }
}*/
/*
void twosum(vector<int>& arr,int target){
  map<int,int> mp;
  int n=arr.size();
  for(int i=0;i<n;i++)
  {
    int num=arr[i];
    int balance=target-num;
    if(mp.find(balance)!=mp.end())
    {
      cout<<"\nYes\n";
      cout<<mp[balance]<<"&"<<i;
    }
    mp[num]=i;
  }
}*/
void twosum(vector<int> arr,int target)
{
  int n=arr.size();
  int left=0;
  int right=n-1;
  while(left<right)
  {
    if(arr[left]+arr[right]==target)
    {
      cout<<"\nYes\n"<<left<<"&"<<right;
      left++;
      right--;
    }
    else if(arr[left]+arr[right]<target)
    {
      left++;
    }
    else{
      right--;
    } 
  }
}
int main()
{
  int n;
  cout<<"Enter the array size :";
  cin>>n;
  vector<int> arr;
  for(int i=0;i<n;i++)
  {
    int num;
    cin>>num;
    arr.push_back(num);
  }
  int target;
  cout<<"Enter the target value: ";
  cin>>target;
  twosum(arr,target);
  return 0;
}