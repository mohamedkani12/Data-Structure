#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int Floor(vector<int>& arr,int n,int x){
  int ans = -1;
  int low = 0,high = n-1;
  while(low<=high){
    int mid = (low+high)/2;
    if(arr[mid]<=x){
      ans=arr[mid];
      low = mid+1;
    }
    else{
      high = mid-1;
    }
  }
  return ans;
}
int Ceil(vector<int>& arr,int n,int x){
  int low = 0,high = n-1;
  int ans = -1;
  while(low<=high){
    int mid = (low+high)/2;
    if(arr[mid]>=x){
      ans=arr[mid];
      high = mid-1;
    }
    else{
      low=mid+1;
    }
  }
  return ans;
}
int main(){
  int n;
  cout<<"Enter the array size : ";
  cin>>n;
  vector<int> arr;
  cout<<"Enter the array elements : ";
  for(int i=0;i<n;i++){
    int num;
    cin>>num;
    arr.push_back(num);
  }
  int x;
  cout<<"Enter the target value : ";
  cin>>x;
  int ans = Floor(arr,n,x);
  cout<<"Floor Answer : "<<ans;
  ans = Ceil(arr,n,x);
  cout<<"\nCeil Answer : "<<ans;
  return 0;
}