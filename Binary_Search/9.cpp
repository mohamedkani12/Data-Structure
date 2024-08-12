#include<iostream>                                                    
#include<bits/stdc++.h>                                                     
using namespace std;
int MinElement(vector<int>& arr,int n){
  int low = 0, high = n-1;
  int mini = INT_MAX;
  while(low<=high){
    int mid=(low+high)/2;
    if(arr[low]<=arr[high]){
      mini = min(mini,arr[low]);
      break;
    }
    if(arr[low]<=arr[mid])
    {
      mini = min(arr[low],mini);
      low = mid+1;
    }
    else{
      mini = min(arr[mid],mini);
      high = mid-1;
    }
  }
  return mini;
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
  int ans=MinElement(arr,n);
  cout<<"Minimimum Element : "<<ans;
  return 0;
}