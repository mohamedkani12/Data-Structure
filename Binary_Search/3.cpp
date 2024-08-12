#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int searchInsert(vector<int>& arr,int n,int x){
  int low = 0,high = n-1;
  int ans=n;
  while(low<=high){
    int mid = (low+high)/2;
    if(arr[mid]>=x)
    {
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
  cout<<"Enter the array size : ";
  cin>>n;
  cout<<"Enter the array elements : ";
  vector<int> arr;
  for(int i=0;i<n;i++){
    int num;
    cin>>num;
    arr.push_back(num); 
  }
  int x;
  cout<<"Enter insert element : ";
  cin>>x;
  int ans = searchInsert(arr,n,x);
  cout<<"Answer : "<<ans;
  return 0;
}