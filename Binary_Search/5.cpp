#include<iostream>                                                    
#include<bits/stdc++.h>                                                     
using namespace std;
int FirstOccurence(vector<int>& arr,int n,int x){
  int first = -1;
  int low=0,high = n-1;
  while(low<=high){
    int mid=(low+high)/2;
    if(arr[mid]==x){
      first = mid;
      high = mid-1;
    }
    else if(arr[mid]<x){
      low = mid+1;
    }
    else{
      high = mid-1;
    }
  }
  return first;
}
int LastOccurence(vector<int>& arr,int n,int x){
  int last = -1;
  int low = 0,high = n-1;
  while(low<=high){
    int mid=(low+high)/2;
    if(arr[mid]==x){
      last = mid;
      low=mid+1;
    }
    else if(arr[mid]<x){
      low = mid+1;
    }
    else{
      high=mid-1;
    }
  }
  return last;
}
pair<int,int> FirstAndLastOccurence(vector<int>& arr,int n,int x){
  int first ;
  first = FirstOccurence(arr,n,x);
  if(first==-1) return{-1,-1};
  int last = LastOccurence(arr,n,x);
  return {first,last};
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
  int x ;
  cout<<"Enter the target value : ";
  cin>>x;
  pair<int,int> answer = FirstAndLastOccurence(arr,n,x);
  cout<<"First Occurence : "<<answer.first;
  cout<<"\nLast Occurence : "<<answer.second;
  return 0;
}