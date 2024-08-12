#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int lowerBound(vector<int>& arr,int n,int x){
  int low=0,high=n-1;
  int ans=n;
  while(low<=high){
    int mid=(low+high)/2;
    if(arr[mid]>=x){
      ans=mid;
      high=mid-1;
    }
    else{
      low=mid+1;
    }
  }
  return low;
}
int optimalApproach(vector<vector<int>>& arr,int n){
  int cntMax=0,index=-1;
  for(int i=0;i<n;i++){
    int cntOnes = n-lowerBound(arr[i],n,1);
    if(cntOnes>cntMax){
      index=i;
      cntMax=cntOnes;
    }
  }
  return index;
}
int main(){
  int n;
  cout<<"Enter 2d array size: ";
  cin>>n;
  vector<vector<int>> arr;
  for(int i=0;i<n;i++){
    vector<int> ans;
    for(int j=0;j<n;j++){
      int num;
      cin>>num;
      ans.push_back(num);
    }
    arr.push_back(ans);
  }
  int rowNumber = optimalApproach(arr,n);
  cout<<"Answer : "<<rowNumber;
  return 0;
}