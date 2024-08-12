#include<iostream>
#include<bits/stdc++.h>
using namespace std;
/*void fourSum(vector<int> arr,int n,int target){
  set<vector<int>> st;
  vector<vector<int>> temp1;
  for(int i=0;i<n;i++)
  {
    for(int j=i+1;j<n;j++){
      for(int k=j+1;k<n;k++)
      {
        for(int l=k+1;l<n;l++)
        {
          int sum=arr[i]+arr[j];
          sum+=arr[k];
          sum+=arr[l];
          if(sum==target)
          {
            vector<int> temp={arr[i],arr[j],arr[k],arr[l]};
            sort(temp.begin(),temp.end());
            st.insert(temp);
            temp={i,j,k,l};
            temp1.push_back(temp);
          }
        }
      }
    }
  }
  vector<vector<int>> ans(st.begin(),st.end());
  for(auto it:ans)
  {
    for(auto i:it)
    {
      cout<<i<<" ";
    }
    cout<<endl;
  }
  cout<<"\nIndex at \n";
  for(auto it:temp1)
  {
    for(auto i:it)
      cout<<i<<" ";
    cout<<endl; 
  }
}*/
/*void fourSum(vector<int> arr,int n,int t)
{
  set<vector<int>> st;
  for(int i=0;i<n;i++)
  {
    for(int j=i+1;j<n;j++)
    {
      set<long long> hashset;
      for(int k=j+1;k<n;k++)
      {
        long long sum=arr[i]+arr[j];
        sum+=arr[k];
        int fourth=t-sum;
        if(hashset.find(fourth)!=hashset.end()){
          vector<int> temp={arr[i],arr[j],arr[k],fourth};
          sort(temp.begin(),temp.end());
          st.insert(temp);
        }
        hashset.insert(arr[k]);
      }
    }
  }
  vector<vector<int>> ans(st.begin(),st.end());
  for(auto it:ans)
  {
    for(auto i:it)
    {
      cout<<i<<" ";
    }
    cout<<endl;
  }
}*/
void fourSum(vector<int> arr,int n,int target)
{
  vector<vector<int>> ans;
  sort(arr.begin(),arr.end());
  for(int i=0;i<n;i++)
  {
    if(i>0 && arr[i]==arr[i-1]) continue;
    for(int j=i+1;j<n;j++){
      if(j!=i+1 && arr[j-1]==arr[j]) continue;
      int k=j+1;
      int l=n-1;
      while(k<l)
      {
        long long sum=arr[i];
        sum+=arr[j];
        sum+=arr[k];
        sum+=arr[l];
        if(sum == target)
        {
            vector<int> temp={arr[i],arr[j],arr[k],arr[l]};
            ans.push_back(temp);
            k++;
            l--;
            while(k<l && arr[k]==arr[k-1]) k++; 
            while(k<l && arr[l]==arr[l+1]) l--; 
        }
        else if(sum<target) k++;
        else l--;
      }
    }
  }
  for(auto it:ans)
  {
    for(auto i:it)
    {
      cout<<i<<" ";
    }
    cout<<endl;
  }
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
  int t;
  cout<<"enter target value: ";
  cin>>t;
  fourSum(arr,n,t);
  return 0;
}