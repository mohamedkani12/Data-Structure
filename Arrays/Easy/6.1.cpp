//right rotate by k places
#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
void rotateright(int arr[],int n)
{
  int k;
  cout<<"\nenter the how many place rotate:";
  cin>>k;
  k=k%n;
  int temp[k];
  for(int i=n-k;i<n;i++)
    temp[i-(n-k)]=arr[i];
  for(int i=n-k-1;i>=0;i--)
    arr[i+k]=arr[i];
  for(int i=0;i<k;i++)
    arr[i]=temp[i];
  for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
}
void rotate1(int arr[],int n)
{
  int k;
  cout<<"Enter array rotate places:";
  cin>>k;
  reverse(arr+n-k,arr+n);
  reverse(arr,arr+n-k);
  reverse(arr,arr+n);
  for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
}
int main()
{
  int n;
  cout<<"enter the array size : ";
  cin>>n;
  int arr[n];
  cout<<"Enter the array elemetnts ";
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  rotateright(arr,n);
  int arr1[n];
  cout<<"Enter the array elemetnts ";
  for(int i=0;i<n;i++)
  {
    cin>>arr1[i];
  }
  rotate1(arr1,n);
  
  return 0;
}