#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cout<<"Enter array size : ";
  cin>>n;
  int arr[n];
  cout<<"Enter array elements : ";
  map<int,int> mp;
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
    mp[arr[i]]++;
  }
  int q;
  cout<<"enter how many queries wnated :";
  cin>>q;
  while(q>0){
    int num;
    cout<<"Enter number : ";
    cin>>num;
    cout<<"Repeated "<<mp[num]<<" times\n";
    q--;
  }
  return 0;
}