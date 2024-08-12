#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int merge(vector<int> &arr,int low,int mid,int high){
  vector<int> temp;
  int cnt=0;
  int left=low;
  int right=mid+1;
  while(left<=mid && right<=high)
  {
    if(arr[left]<=arr[right]){
      temp.push_back(arr[left]);
      left++;
    }
    else{
      cnt+=(mid-low+1);
      temp.push_back(arr[right]);
      right++;
    }
  }
  while (left <= mid) {
    temp.push_back(arr[left]);
    left++;
  }
  while (right <= high) {
    temp.push_back(arr[right]);
    right++;
  }
  for (int i = low; i <= high; i++) {
    arr[i] = temp[i - low];
  }
  return cnt;
}
int mergesort(vector<int> &arr,int low,int high)
{
  int cnt=0;
  if (low >= high) return cnt;
  int mid=(low+high)/2;
  cnt+=mergesort(arr,low,mid);
  cnt+=mergesort(arr,mid+1,high);
  cnt+=merge(arr,low,mid,high);
  return cnt;
}
int numberofinversion(vector<int> &arr,int n){
  // int cnt=0;
  // cnt+=mergesort(arr,0,n-1);
  return mergesort(arr,0,n-1);
}
int numberofinversion1(vector<int> &arr,int n){
  int cnt=0;
  for(int i=0;i<n;i++)
  {
    for(int j=i+1;j<n;j++)
    {
      if(arr[i]>arr[j])
        cnt++;
    }
  }
  return cnt;
}
int main()
{
  int n;
  cout<<"enter an array size :";
  cin>>n;
  vector<int> arr;
  cout<<"enter array elements : \n";
  for(int i=0;i<n;i++)
  {
    int num;
    cin>>num;
    arr.push_back(num);
  }
  cout<<"Number of Pairs : "<<numberofinversion(arr,n);
  vector<int> arr1;
  cout<<"\nenter 2nd array elements : \n";
  for(int i=0;i<n;i++)
  {
    int num;
    cin>>num;
    arr1.push_back(num);
  }
  cout<<"Number of Pairs : "<<numberofinversion1(arr1,n);
  return 0;
}
