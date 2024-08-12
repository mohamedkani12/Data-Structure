#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void nextPermutation(vector<int> arr)
{
  int n=arr.size();
  int index=-1;
  for(int i=n-2;i>=0;i--)
  {
    if(arr[i]<arr[i+1])
    {
      index=i;
      break;
    }
  }
  if(index==-1)
  {
    reverse(arr.begin(),arr.end());
    for(auto it:arr)
    {
      cout<<it<<" ";
    }
    return ;
  }
  for(int i=n-1;i>index;i--)
  {
    if(arr[i]>arr[index])
    {
      swap(arr[i],arr[index]);
      break;
    }
  }
  reverse(arr.begin()+index+1,arr.end());
  for(auto it:arr)
  {
    cout<<it<<" ";
  }

}
int main()
{
  int n;
  cout<<"Enter the array size: ";
  cin>>n;
  cout<<"Enter the array elements: ";
  vector<int> arr;
  for(int i=0;i<n;i++)
  {
    int num;
    cin>>num;
    arr.push_back(num);
  }
  nextPermutation(arr);
  return 0;
}