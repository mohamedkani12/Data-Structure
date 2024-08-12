#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int upperBound(vector<int>& arr,int n,int x){
  if(arr[0]>x) return 0;
  int low=0,high = n-1,ans = n;
  while(low<=high){
    int mid = (low+high)/2;
    if(arr[mid]>x){
      ans = mid;
      high = mid - 1;
    }
    else{
      low=mid+1;
    }
  }
  return ans;
}
int lowerBound(vector<int>& arr,int n,int x){
  int low = 0,high = n - 1;
  if(arr[0]>x) return 0;
  int ans = n;
  while(low<=high){
    int mid = (low+high)/2;
    if(arr[mid]>=x){
      ans=mid;
      high = mid-1;
    }
    else{
      low = mid+1;
    }
  }
  return ans;
}
int main(){
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
  int x;
  cout<<"Enter the value of X : ";
  cin>>x;
  int ans = lowerBound(arr,n,x);
  cout<<"Lower Bound \n";
  cout<<"Answer : "<<ans;
  cout<<"\nUpper Bound \n";
  ans = upperBound(arr,n,x);
  cout<<"Answer : "<<ans;
  return 0;
}