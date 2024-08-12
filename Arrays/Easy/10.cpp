#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void intersect(int a[],int n1,int b[],int n2){
  vector<int> isvisited(n2,0);
  vector<int> ans;
  for(int i=0;i<n1;i++)
  {
    for(int j=0;j<n2;j++)
    {
      if(a[i]==b[j] && isvisited[j]==0)
      {
        ans.push_back(a[i]);
        isvisited[j]=1;
        break;
      }
      if(b[j]>a[i])
        break;
    }
  }
  for(auto it:ans)
    cout<<it<<" ";
}
void intersect1(int a[],int n1,int b[],int n2){
  int i=0;
  int j=0;
  vector<int> ans;
  while(i<n1 && j<n2)
  {
    if(a[i]<b[j])
    {
      i++;
    }
    else if(a[i]>b[j])
    {
      j++;
    }
    else{
      ans.push_back(a[i]);
      i++;
      j++;
    }
  }
  for(auto it:ans)
    cout<<it<<" ";
}
int main()
{
  int n1,n2;
  cout<<"Using Brute force approach \n";
  cout<<"Enter 1st array size : ";
  cin>>n1;
  cout<<"Enter 1st array elements : ";
  int arr1[n1];
  for(int i=0;i<n1;i++)
    cin>>arr1[i];
  cout<<"Enter 2nd array size : ";  
  cin>>n2;
  int arr2[n2];
  cout<<"Enter 2nd array elements : ";
  for(int i=0;i<n2;i++)
    cin>>arr2[i];
  intersect(arr1,n1,arr2,n2);
  cout<<"\nUsing optimal approach\n";
  intersect1(arr1,n1,arr2,n2);
  return 0;
}