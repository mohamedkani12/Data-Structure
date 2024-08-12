#include<iostream>
#include<bits/stdc++.h>
using namespace std;
/* Brute force
void leaders(vector<int> arr,int n)
{
  vector<int> ans;
  int leader;
  for(int i=0;i<n;i++)
  {
    leader=1;
    for(int j=i+1;j<n;j++)
    {
      if(arr[j]>arr[i])
      {
        leader=0;
        break;
      }
    }
    if(leader)
    {
      ans.push_back(arr[i]);
    }
  }
  for(auto it:ans)
    cout<<it<<" ";
}
*/
void leaders(vector<int> arr,int n){
  int maxi=INT_MIN;
  vector<int> ans;
  for(int i=n-1;i>=0;i--)
  {
    if(arr[i]>maxi)
    {
      ans.push_back(arr[i]);
    }
    maxi=max(maxi,arr[i]);
  }
  for(auto it:ans)
    cout<<it<<" ";
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
  leaders(arr,n);
  return 0;
}