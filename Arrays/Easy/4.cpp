#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void dup(int arr[],int n)
{
  set<int> st;
  for(int i=0;i<n;i++)
  {
    st.insert(arr[i]);
  }
  int index=0;
  for(auto it:st)
  {
    arr[index++]=it;
    cout<<it<<" ";
  }
  cout<<"\nUnique elements in an array : "<<index;
}
void dup1(int arr[],int n)
{
  int i=0;
  for(int j=1;j<n;j++)
  {
    if(arr[j]!=arr[i])
    {
      arr[i+1]=arr[j];
      i++;
    }
  }
  cout<<"\nUnique elements in an array : "<<i+1;
}
int main()
{
  int n;
  cout<<"Enter array size: ";
  cin>>n;
  int arr[n];
  cout<<"enter array elements : ";
  for(int i=0;i<n;i++)
    cin>>arr[i];
  cout<<"Using set methods \n";
  dup(arr,n);
  int arr1[n];
  cout<<"\nenter array2 elements : ";
  for(int i=0;i<n;i++)
    cin>>arr1[i];
  cout<<"\nUsing optimal approach";
  dup1(arr1,n);
  return 0;
}