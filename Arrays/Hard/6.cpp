#include<iostream>
#include<bits/stdc++.h>
using namespace std;
/*void nsk(vector<int> arr,int n,int k){
  int cnt=0;
  for(int i=0;i<n;i++)
  {
    for(int j=i;j<n;j++){
      int xor1=0;
      for(int m=i;m<=j;m++)
      {
        xor1^=arr[m];
      }
      if(xor1==k)
        cnt++;
    }
  }
  cout<<"Number of subarrays with k : "<<cnt;
}*/
/*void nsk(vector<int> arr,int n,int k){
  int cnt=0;
  for(int i=0;i<n;i++)
  {
    int xor1=0;
    for(int j=i;j<n;j++){
      xor1^=arr[j];
      if(xor1==k)
        cnt++;
    }
  }
  cout<<"Number of subarrays with k : "<<cnt;
}*/
void nsk(vector<int> arr,int n,int k){
  map<int,int> mp;
  int xr=0;
  mp[xr]++;
  int cnt=0;
  for(int i=0;i<n;i++)
  {
    xr^=arr[i];
    int x=xr^k;
    cnt+=mp[x];
    mp[xr]++;
  }
  cout<<"Number of subarrays with k : "<<cnt;
}
int main()
{
  int n;
  cout<<"enter array size : ";
  cin>>n;
  vector<int> arr;
  for(int i=0;i<n;i++)
  {
    int num;
    cin>>num;
    arr.push_back(num);
  }
  int k;
  cout<<"Give me the k value : ";
  cin>>k;
  nsk(arr,n,k);
  return 0;
}