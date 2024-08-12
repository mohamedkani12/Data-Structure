#include<iostream>                                                    
#include<bits/stdc++.h>                                                     
using namespace std;
int findMini(vector<int>& arr){
  int mini = INT_MAX;
  for(int i=0;i<arr.size();i++)
  {
    mini = min(arr[i],mini);
  }
  return mini;
}
int findMaxi(vector<int>& arr){
  int sum=0;
  for(int i=0;i<arr.size();i++)
  {
    sum+=arr[i];
  }
  return sum;
}
bool possible(int painting,vector<int>& arr,int k){
  int n=arr.size();
  int paint=0,count = 1;
  for(int i=0;i<n;i++){
    if(paint+arr[i]<=painting){
      paint+=arr[i];
    }
    else{
      paint=arr[i];
      count++;
    }
  }
  if(count==k) return true;
  return false;
}
int PainterPartition(vector<int>& arr,int k){
  int mini = findMini(arr);
  int maxi = findMaxi(arr);
  for(int i=mini;i<=maxi;i++){
    if(possible(i,arr,k)==true)
      return i;
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
  int k;
  cout<<"Enter Painters: ";
  cin>>k;
  int ans = PainterPartition(arr,k);
  cout<<"Answer : "<<ans;
  return 0;
}