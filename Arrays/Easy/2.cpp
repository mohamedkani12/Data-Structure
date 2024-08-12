#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void bruteforce(int arr[],int n)
{
  sort(arr,arr+n);
  int l=arr[n-1],sl;
  for(int i=n-2;i>=0;i--)
  {
    if(arr[i]!=l)
    {
      sl=arr[i];
      break;
    }
  }
  cout<<"Second Largest element in an array : "<<sl;
}
void betterapproach(int arr[],int n)
{
  int l=arr[0],sl=-1;
  for(int i=0;i<n;i++)
  {
    if(arr[i]>l)
    {
      sl=l;
      l=arr[i];
    }
    else if(arr[i]<l && arr[i]>sl)
      sl=arr[i];
  }
  cout<<"Second Largest element in an array : "<<sl;
}
void secondSmallest(int arr[],int n)
{
 int smallest=arr[0];
 int ssmallest=INT_MAX;
 for(int i=0;i<n;i++)
 {
  if(arr[i] < smallest)
  {
    ssmallest=smallest;
    smallest=arr[i];
  }
  else if(arr[i]!=smallest && arr[i] < ssmallest)
  {
    ssmallest=arr[i];
  }
 } 
  cout<<"Second Smallest  element in an array : "<<ssmallest;
}
int main()
{
  int n;
  cout<<"Enter array size : ";
  cin>>n;
  cout<<"Enter array Elements  :";
  int arr[n];
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  cout<<"Using Brute Force Approach\n";
  bruteforce(arr,n);
  cout<<"\nusing better Approach\n";
  betterapproach(arr,n);
  //optimal(arr,n);
  cout<<"\nFinding secondSmallest  ";
  cout<<"\nEnter 2nd array size :";
  cin>>n;
  cout<<"Enter array Elements: ";
  int arr2[n];
  for(int i=0;i<n;i++)
  {
    cin>>arr2[i];
  }
  secondSmallest(arr2,n);
  return 0;
}