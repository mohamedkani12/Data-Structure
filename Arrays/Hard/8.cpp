#include<iostream>
#include<bits/stdc++.h>
using namespace std;
/*void mergesort(vector<int> arr1,vector<int> arr2,int n,int m)
{
  int left=0,right=0;
  int arr3[n+m];
  int index=0;
  while(left<n && right<m)
  {
    if(arr1[left]<=arr2[right])
    {
      arr3[index]=arr1[left];
      left++,index++;
    }
    else{
      arr3[index]=arr2[right];
      right++,index++;
    }
  }
  while(left<n)
  {
    arr3[index++]=arr1[left++];
  }
  while(right<m)
  {
    arr3[index++]=arr2[right++];
  }
  for(int i=0;i<n+m;i++)
  {
    if(i<n) arr1[i]=arr3[i];
    else arr2[i-n]=arr3[i];
  }
  for(int i=0;i<n;i++)
  {
    cout<<arr1[i]<<" ";
  }
  cout<<endl;
  for(int i=0;i<m;i++)
  {
    cout<<arr2[i]<<" ";
  }
}*/
/*void mergesort(vector<int> arr1,vector<int> arr2,int n,int m){
  int left=n-1;
  int right=0;
  while(left>=0 && right<m)
  {
    if(arr1[left]>arr2[right])
    {
      swap(arr1[left],arr2[right]);
      left--,right++;
    }
    else{
      break;
    }
  }
  sort(arr1.begin(),arr1.end());
  sort(arr2.begin(),arr2.end());
  for(int i=0;i<n;i++)
  {
    cout<<arr1[i]<<" ";
  }
  cout<<endl;
  for(int i=0;i<m;i++)
  {
    cout<<arr2[i]<<" ";
  }
}*/
void swapIfGreater(vector<int> &arr1,vector<int> &arr2,int ind1,int ind2){
  if(arr1[ind1]>arr2[ind2])
    swap(arr1[ind1],arr2[ind2]);
}
void mergesort(vector<int> &arr1,vector<int> &arr2,int n,int m){
  int len=n+m;
  int gap=(len/2)+(len%2);
  while(gap>0)
  {
    int left=0;
    int right=left+gap;
    while(right<len){
      if(left<n && right>=n)
      {
        swapIfGreater(arr1,arr2,left,right-n);
      }
      else if(left>=n)
        swapIfGreater(arr2,arr2,left-n,right-n);
      else  
        swapIfGreater(arr1,arr1,left,right);
      left++,right++;
    }
    if(gap==1)  break;
    gap=(gap/2) + (gap%2);
  }
  for(int i=0;i<n;i++)
  {
    cout<<arr1[i]<<" ";
  }
  cout<<endl;
  for(int i=0;i<m;i++)
  {
    cout<<arr2[i]<<" ";
  }
}
int main()
{
  int n;
  cout<<"enter 1st array size : ";
  cin>>n;
  vector<int> arr1;
  for(int i=0;i<n;i++)
  {
    int num;
    cin>>num;
    arr1.push_back(num);
  }
  int m;
  cout<<"enter 2nd array size: ";
  cin>>m;
  vector<int> arr2;
  for(int i=0;i<m;i++){
    int num;
    cin>>num;
    arr2.push_back(num);
  }
  mergesort(arr1,arr2,n,m);
  return 0;
}