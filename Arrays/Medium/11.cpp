#include<iostream>
#include<bits/stdc++.h>
using namespace std;
/*  //brute force
void rotateninty(vector<vector<int>> &arr,int n){
  vector<vector<int>> ans(n,vector<int>(n));
  cout<<"After 90deg rotation \n";
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n;j++)
    {
      ans[j][n-1-i]=arr[i][j];
    }
  }
  for(auto it:ans)
  {
    for(auto i:it)
      cout<<i<<" ";
    cout<<endl;
  }
}*/

void rotateninty(vector<vector<int>> &arr,int n){
  for(int i=0;i<n-1;i++)
  {
    for(int j=i+1;j<n;j++){
      swap(arr[i][j],arr[j][i]);
    }
  }
  for(int i=0;i<n;i++)
  {
    reverse(arr[i].begin(),arr[i].end());
  }
  cout<<"After 90deg \n";
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
  cout<<"Enter 2D array: ";
  cin>>n;
  vector<vector<int>> arr;
  cout<<"Enter array elements: \n";
  for(int i=0;i<n;i++)
  {
    vector<int> temp;
    for(int j=0;j<n;j++)
    {
      int num;
      cin>>num;
      temp.push_back(num);
    }
    arr.push_back(temp);
  }
  rotateninty(arr,n);
  return 0;
}