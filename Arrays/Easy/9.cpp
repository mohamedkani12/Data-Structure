#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void Union(int arr1[],int n1,int arr2[],int n2){
  set<int> st;
  for(int i=0;i<n1;i++)
    st.insert(arr1[i]);
  for(int i=0;i<n2;i++)
    st.insert(arr2[i]);
  for(auto it:st)
    cout<<it<<" ";
}
void Union1(int arr1[],int n1,int arr2[],int n2){
  int i=0,j=0;
  vector<int> unionarr;
  while(i<n1 && j<n2)
  {
    if(arr1[i]<=arr2[j])
    {
      if(unionarr.size()==0 || unionarr.back()!=arr1[i]){
        unionarr.push_back(arr1[i]);
      }
      i++;
    }
    else{
      if(unionarr.size()==0 || unionarr.back()!=arr2[j]){
        unionarr.push_back(arr2[j]);
      }
      j++;
    }
  }
  while(i<n1){
    if(arr1[i]<=arr2[j])
    {
      if(unionarr.size()==0 || unionarr.back()!=arr1[i]){
        unionarr.push_back(arr1[i]);
      }
      i++;
    }
  }
  while(j<n2){
    if(arr1[i]>=arr2[j])
    {
      if(unionarr.size()==0 || unionarr.back()!=arr2[i]){
        unionarr.push_back(arr2[j]);
      }
      j++;
    }
  }
  for(auto it:unionarr)
  {
    cout<<it<<" ";
  }
}
int main()
{
  int n1,n2;
  cout<<"Using Brute force approach \n";
  cout<<"Enter 1st array size : ";
  cin>>n1;
  cout<<"Enter 1st array elements : ";
  int arr1[n1];
  for(int i=0;i<n1;i++)
    cin>>arr1[i];
  cout<<"Enter 2nd array size : ";  
  cin>>n2;
  int arr2[n2];
  cout<<"Enter 2nd array elements : ";
  for(int i=0;i<n2;i++)
    cin>>arr2[i];
  Union(arr1,n1,arr2,n2);
  cout<<"\nusig Optimal approach \n";
  Union1(arr1,n1,arr2,n2);
  return 0;
}