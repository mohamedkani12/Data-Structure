#include<iostream>                                                    
#include<bits/stdc++.h>                                                     
using namespace std;
int findKOccurence(vector<int>& arr,int n)
{
  int index=-1;
  int ans = INT_MAX;
  int low=0,high=n-1;
  while(low<=high){
    int mid=(low+high)/2;
    if(arr[low]<=arr[high]){
      if(arr[low]<=ans){
        ans=arr[low];
        index=low;
        break;
      }
    }
    if(arr[low]<=arr[mid]){
      if(arr[low]<=ans)
      {
        index=low;
        ans=arr[low];
      }
      low=mid+1;
    }
    else{
      if(arr[mid]<=ans){
        index=mid;
        ans=arr[mid];
      }
      high=mid-1;
    }
  }
  return index;
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
  int ans = findKOccurence(arr,n);
  cout<<"Rotation : "<<ans;
  return 0;
}