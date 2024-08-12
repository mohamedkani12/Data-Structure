#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void spiralmatrix(vector<vector<int>> &arr,int n){
  int left=0,top=0,bottom=n-1,right=n-1;
  vector<int> ans;
  while(left<=right && top<=bottom){
    for(int i=left;i<=right;i++)
    {
      ans.push_back(arr[top][i]);
    }
    top++;
    for(int i=top;i<=bottom;i++)
    {
      ans.push_back(arr[i][right]);
    }
    right--;
    if(top<=bottom){
      for(int i=right;i>=left;i--)
      {
        ans.push_back(arr[bottom][i]);
      }
      bottom--;
    }
    if(left<=right){
      for(int i=bottom;i>=top;i--)
      {
        ans.push_back(arr[i][left]);
      }
      left++;
    }
  }
  cout<<"Spiral print : \n";
  for(auto it:ans)
    cout<<it<<" ";
}
int main(){
  int n;
  cout<<"Enter Size of array: ";
  cin>>n;
  vector<vector<int>> arr;
  cout<<"Enter array elements \n";
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
  spiralmatrix(arr,n);
  return 0;
}