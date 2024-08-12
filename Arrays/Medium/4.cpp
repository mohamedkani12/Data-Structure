#include<iostream>
#include<bits/stdc++.h>
using namespace std;
/*void maximumsub(int arr[],int n)
{
  int maxi=0,sum=0;
  for(int i=0;i<n;i++)
  {
    sum=0;
    for(int j=i;j<n;j++)
    {
      sum+=arr[j];
      maxi=max(sum,maxi);
    }
  }
  cout<<maxi;
}*/
void maximumsub(int arr[],int n)
{
  int start=0;
  int sum=0;
  int maxi=0;
  int ansStart=-1,ansEnd=-1;
  for(int i=0;i<n;i++)
  {
    if(sum==0)
      start=i;
    sum+=arr[i];
    if(sum>maxi)
    { 
      maxi=max(sum,maxi);
      ansStart=start;
      ansEnd=i;
    }
    if(sum<0)
      sum=0;
  }
   cout<<maxi;
   cout<<"\n"<<ansStart<<" "<<ansEnd;
}
int main()
{
  int n;
  cout<<"Enter array size : ";
  cin>>n;
  int arr[n];
  cout<<"Enter array elements:";
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  maximumsub(arr,n);
  return 0;
}