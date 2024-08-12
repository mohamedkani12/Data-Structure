#include<iostream>                                                    
#include<bits/stdc++.h>                                                     
using namespace std;
bool possible(vector<int>& arr,int dist,int cow){
  int cntCow=1,last = arr[0];
  for(int i=1;i<arr.size();i++){
    if(arr[i]-last>=dist)
    { cntCow++;
      last = arr[i];
    }
  }
  if(cntCow>=cow) return true;
  return false;
}
int AggressiveCow(vector<int>& arr,int cow){
  sort(arr.begin(),arr.end());
  int n=arr.size();
  int limit=arr[n-1]-arr[0];
  for(int i=1;i<=limit;i++){
    if(possible(arr,i,cow)==false)
      return (i-1);
  }
  return limit;
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
  int cow ;
  cout<<"Enter Cow: ";
  cin>>cow;
  int ans = AggressiveCow(arr,cow);
  cout<<"Answer : "<<ans;
  return 0;
}