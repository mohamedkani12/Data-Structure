#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void arrange(int arr[],int n)
{
  vector<int> pos,neg;
  for(int i=0;i<n;i++)
  {
    if(arr[i]>0)
      pos.push_back(arr[i]);
    else
      neg.push_back(arr[i]);
  }
  if(pos.size()>neg.size()){
    for(int i=0;i<neg.size();i++)
    {
      arr[i*2]=pos[i];
      arr[i*2+1]=neg[i];
    }
    int index=neg.size()*2;
    for(int i=neg.size();i<pos.size();i++)
    {
      arr[index]=pos[i];
      index++;
    }
  }
  else
  {
    for(int i=0;i<pos.size();i++)
    {
      arr[i*2]=pos[i];
      arr[i*2+1]=neg[i];
    }
    int index=pos.size()*2;
    for(int i=pos.size();i<neg.size();i++)
    {
      arr[index]=neg[i];
      index++;
    }
  }
  for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
}
/*
void arrange(int arr[],int n )
{
  int ans[n];
  int i=0;
  int j=1;
  for(int k=0;k<n;k++)
  {
    if(arr[k]<0)
    {
      ans[j]=arr[k];
      j+=2;
    }
    else{
      ans[i]=arr[k];
      i+=2;
    }
  }
  for(int k=0;k<n;k++)
    cout<<ans[k]<<" ";
}*/
int main()
{
  int n;
  cout<<"Enter the array size: ";
  cin>>n;
  cout<<"enter the elements in an array: ";
  int arr[n];
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  arrange(arr,n);
  return 0;
}