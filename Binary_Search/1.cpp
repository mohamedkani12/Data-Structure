#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int Iterative(vector<int>&arr,int target,int n){
  int low = 0 , high = n-1;
  while(low<=high){
    int mid = (low+high)/2;
    if(arr[mid]==target) return 1;
    else if(arr[mid]<target)
      low = mid+1;
    else
      high = mid-1;
  }
  return 0;
}
int Recursive(vector<int>& arr,int low,int high,int target){
  if(low>high) return 0;
  int mid = (low+high)/2;
  if(arr[mid]==target) return 1;
  else if(arr[mid]<target) return Recursive(arr,mid+1,high,target);
  return Recursive(arr,low,mid-1,target);
}
int main(){
  int n;
  cout<<"Enter array size : ";
  cin>>n;\
  vector<int> arr;
  cout<<"Enter the array elements : ";
  for(int i=0;i<n;i++)
  {
    int num;
    cin>>num;
    arr.push_back(num);
  }
  cout<<"Enter target element : ";
  int target;
  cin>>target;
  int flag = Iterative(arr,target,n);
  cout<<"Iterative Approach\n";
  if(flag==1) cout<<"Target Element Found ";
  else cout<<"Not Found ";
  cout<<"\nRecursive Approach\n";
  flag = Recursive(arr,0,n-1,target);
  if(flag==1) cout<<"Target Element Found ";
  else cout<<"Not Found ";
  return 0;
}