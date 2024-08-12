#include<iostream>                                                    
#include<bits/stdc++.h>                                                     
using namespace std;
int FindSingleElement(vector<int>& arr,int n){
  int low=1,high=n-2;
  if(n==1) return arr[0];
  if(arr[0]!=arr[1]) return arr[0];
  if(arr[n-1]!=arr[n-2]) return arr[n-1];
  while(low<=high){
    int mid=(low+high)/2;
    if(arr[mid]!=arr[mid-1] && arr[mid]!=arr[mid+1])
      return arr[mid];
    if(mid%2==0 && arr[mid]==arr[mid+1] || mid%2==1 && arr[mid]==arr[mid-1])
      low = mid+1;
    else  
      high = mid-1;
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
  int ans = FindSingleElement(arr,n);
  cout<<"Answer : "<<ans;
  return 0;
}