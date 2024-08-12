#include<iostream>
#include<bits/stdc++.h>
using namespace std;
/*
    //Brute Force
bool ls(vector<int> arr,int num)
{
  int n=arr.size();
  for(int i=0;i<n;i++)
  {
    if(arr[i]==num)
      return true;
  }
  return false;
}
void lcs(vector<int> arr,int n){
  int longest=1;
  for(int i=0;i<n;i++)
  {
    int x=arr[i];
    int cnt=1;
    while(ls(arr,x+1)==true)
    {
      x=x+1;
      cnt=cnt+1;
    }
    longest=max(longest,cnt);
  }
  cout<<"Longest Sequence : "<<longest;
}*/
/*
 //Better approach
void lcs(vector<int> arr,int n){
  int longest=1,cnt=0,lastSmallNum=INT_MIN;
  sort(arr.begin(),arr.end());
  for(int i=0;i<n;i++)
  {
    if(arr[i]-1 == lastSmallNum)
    {
      cnt+=1;
      lastSmallNum=arr[i];
    }
    else if(arr[i]!=lastSmallNum)
    {
      cnt=1;
      lastSmallNum=arr[i];
    }
    longest=max(longest,cnt);
  }
  cout<<"Longest Sequence is "<<longest;
}
*/
void lcs(vector<int> arr,int n)
{
  unordered_set<int> st;
  for(int i=0;i<n;i++)
  {
    st.insert(arr[i]);
  }
  int longest=1,cnt=0;
  for(auto it:st)
  {
    if(st.find(it-1) == st.end())
    {
      int x=it;
      cnt=1;
      while(st.find(x+1)!=st.end())
      {
        x=x+1;
        cnt+=1;
      }
      longest=max(cnt,longest);
    }
  }
  cout<<"Longest Sequence is "<<longest;
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
  lcs(arr,n);
  return 0;
}