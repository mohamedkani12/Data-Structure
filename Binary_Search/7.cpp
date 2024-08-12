#include<iostream>                                                    
#include<bits/stdc++.h>                                                     
using namespace std;
int SearchElement(vector<int>& arr,int n,int x){
  int low=0;
  int high=n-1;
  while(low<=high){
    int mid=(low+high)/2;
    if(arr[mid]==x){
      return mid;
    }
    if(arr[low]<=arr[mid]){
      if(arr[low]<=x && x<=arr[mid])
        high = mid-1;
      else  
        low = mid+1;
    }
    else{
      if(arr[mid]<=x && x<=arr[high])
        low=mid+1;
      else
        high = mid-1;
    }
  }
  return -1;
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
  int x;
  cout<<"Enter the element to search : ";
  cin>>x;
  int ans = SearchElement(arr,n,x);
  if(ans!=-1)
    cout<<"Element Found at "<<ans;
  else  
    cout<<"Not Found";
  return 0;
}