#include<iostream>
#include<bits/stdc++.h>
using namespace std;
/*void mergeOverLap(vector<vector<int>> arr,int n,int m){
  vector<vector<int>> ans;
  for(int i=0;i<n;i++)
  {
    int start=arr[i][0];
    int end=arr[i][1];
    if(!ans.empty() && end<=ans.back()[1])
      continue;
    for(int j=i+1;j<n;j++)
    {
      if(arr[j][0]<=end)
      {
        end=max(end,arr[j][1]);
      }
      else{
        break;
      }
    }
    ans.push_back({start,end});
  }
  for(auto it:ans)
  {
    cout<<"(";
    for(auto i:it)
      cout<<" "<<i<<" ";
    cout<<")";
    cout<<" ";
  }
}*/
void mergeOverLap(vector<vector<int>> arr,int n,int m){
  vector<vector<int>> ans;
  for(int i=0;i<n;i++)
  {
    if(ans.empty() || ans.back()[1]<arr[i][0])
    {
      ans.push_back(arr[i]);
    }
    else{
      ans.back()[1]=max(ans.back()[1],arr[i][1]);
    }
  }
  for(auto it:ans)
  {
    cout<<"(";
    for(auto i:it)
      cout<<" "<<i<<" ";
    cout<<")";
    cout<<" ";
  }
}
int main()
{
  int n,m;
  cout<<"Enter vector size : ";
  cin>>n;
  vector<vector<int>> arr;
  for(int i=0;i<n;i++)
  {
    vector<int> temp;
    for(int j=0;j<2;j++)
    {
      int num;
      cin>>num;
      temp.push_back(num);
    }
    arr.push_back(temp);
  }
  mergeOverLap(arr,n,2);
  return 0;
}