#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int buysell(int arr[],int n){
  int cost=0,mini=arr[0],profit=0;
  int ansStart=-1,ansEnd=-1,start;
  for(int i=1;i<n;i++)
  {
    cost=arr[i]-mini;
    if(profit<cost)
    {
      profit=cost;
      ansStart=start;ansEnd=i;
    }
    if(mini>arr[i])
    {
      mini=arr[i];
      start=i;
    }
  }
  cout<<ansStart<<" "<<ansEnd<<endl;
  return profit;
}
int main()
{
  int n;
  cout<<"enter the size of array: ";
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
    cin>>arr[i];
  cout<<"Maximum Profit : "<<buysell(arr,n);
  return 0;
}