#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void rotate(int arr[],int n)
{
  int d;
  cout<<"Enter D place : ";
  cin>>d;
  d=d%n;
  int temp[d];
  for(int i=0;i<d;i++)
    temp[i]=arr[i];
  for(int i=d;i<n;i++)
    arr[i-d]=arr[i];
  for(int i=n-d;i<n;i++)
    arr[i]=temp[i-(n-d)];    
}
void rotate1(int arr[],int n)
{
  int d;
  cout<<"\nEnter d places : ";
  cin>>d;
  reverse(arr,arr+d);
  reverse(arr+d,arr+n);
  reverse(arr,arr+n);
  for(int i=0;i<n;i++)
  {
    cout<<arr[i]<<" ";
  }
}
int main(){
  int n;
  cout<<"Enter array size : ";
  cin>>n;
  cout<<"enter array elements : ";
  int arr[n];
  for(int i=0;i<n;i++)
    cin>>arr[i];
  rotate(arr,n);
  for(int i=0;i<n;i++)  
    cout<<arr[i]<<" ";
  cout<<"\nUsing optimal approach ";
  rotate1(arr,n);
  return 0;
}