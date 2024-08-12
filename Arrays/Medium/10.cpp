#include<bits/stdc++.h>
#include<iostream>
using namespace std;
/* //Brute Force
void markrow(vector<vector<int>> &arr,int i)
{
  int m=arr[0].size();
  for(int j=0;j<m;j++)
  {
    if(arr[i][j]!=0)
      arr[i][j]=-1;
  }
}
void markcol(vector<vector<int>> &arr,int j)
{
  int n=arr.size();
  for(int i=0;i<n;i++)
  {
    if(arr[i][j]!=0)
      arr[i][j]=-1;
  }
}
void setzero(vector<vector<int>> &arr,int n,int m){
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<m;j++)
    {
      if(arr[i][j]==0)
      {
        markrow(arr,i);
        markcol(arr,j);
      }
    }
  }
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<m;j++)
    {
      if(arr[i][j]==-1)
        arr[i][j]=0;
    }
  }
  cout<<"After Matrix : \n";
  for(auto it:arr)
  {
    for(auto i:it)
      cout<<i<<" ";
    cout<<endl;
  }
}
*/
/*  //Better approach
void setzero(vector<vector<int>> &arr,int n,int m)
{
  int row[n]={0};
  int col[m]={0};
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<m;j++)
    {
      if(arr[i][j]==0)
      {
        row[i]=1;
        col[j]=1;
      }
    }
  }
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<m;j++)
    {
      if(row[i] || col[j])
      {
        arr[i][j]=0;
      }
    }
  }
  cout<<"After Matrix : \n";
  for(auto it:arr)
  {
    for(auto i:it)
      cout<<i<<" ";
    cout<<endl;
  }
}
*/
void setzero(vector<vector<int>> &arr,int n,int m)
{
  int col0=1;
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<m;j++)
    {
      if(arr[i][j]==0)
      {
        arr[i][0]=0;
        if(j!=0)
        {
          arr[0][j]=0;
        }
        else
          col0=0;
      }
    }
  }
  for(int i=1;i<n;i++)
  {
    for(int j=1;j<m;j++)
    {
      if(arr[i][j]!=0)
      {
        if(arr[0][j]==0 || arr[i][0]==0)
          arr[i][j]=0;
      }
    }
  }
  if(arr[0][0]==0)
  {
    for(int j=0;j<m;j++)
      arr[0][j]=0;
  }
  if(col0==0)
  {
    for(int i=0;i<n;i++)
      arr[i][0]=0;
  }
  cout<<"After Matrix : \n";
  for(auto it:arr)
  {
    for(auto i:it)
      cout<<i<<" ";
    cout<<endl;
  }
}
int main()
{
  int n,m;
  cout<<"Enter 2d array size: ";
  cin>>n>>m;
  vector<vector<int>> arr;
  for(int i=0;i<n;i++)
  {
    vector<int> temp;
    for(int j=0;j<m;j++)
    {
      int num;
      cin>>num;
      temp.push_back(num);
    }
    arr.push_back(temp);
  }
  setzero(arr,n,m);
  return 0;
}