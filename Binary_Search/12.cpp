#include<iostream>                                                    
#include<bits/stdc++.h>                                                     
using namespace std;
int findPeakElement(vector<int>& arr,int n){
  if(arr[0]>arr[1]) return arr[0];
  if(arr[n-1]>arr[n-2]) return arr[n-1];
  int low=1,high = n-2;
  while(low<=high){
    int mid=(low+high)/2;
    if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1])
      return arr[mid];
    if(arr[mid]>arr[mid-1])
      low=mid+1;
    else if(arr[mid]>arr[mid+1])
      high=mid-1;
  }
}
int main(){
  int n;
  cout<<"Enter the array size : ";
  cin>>n;
  vector<int> arr;
  for(int i=0;i<n;i++){
    int num;
    cin>>num;
    arr.push_back(num);
  }
  int ans = findPeakElement(arr,n);
  cout<<"Peak Element : "<<ans;
  return 0;
}