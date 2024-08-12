#include<bits/stdc++.h>
using namespace std;
void subarray(int arr[],int n,int k)
{
  int len=0;
  for(int i=0;i<n;i++)
  {
    int sum=0;
    for(int j=i;j<n;j++)
    {
      sum+=arr[j];
      if(sum==k)
        len=max(len,j-i+1);
    }
  }
  cout<<"Maximum subarray length : "<<len;
}
void subarray1(int arr[],int n,int k)
{
  map<int,int> presum;
  int sum=0;
  int maxlen=0;
  for(int i=0;i<n;i++)
  {
   sum+=arr[i];
   if(sum==k)
   {
    maxlen=max(maxlen,i+1);
   }
   int rem=sum-k;
   if(presum.find(rem)!=presum.end())
   {
    int len=i-presum[rem];
    maxlen=max(maxlen,len);
   }
   if(presum.find(sum)==presum.end())
    presum[sum]=i;
  }
  cout<<"\nMaximum length : "<<maxlen;
}
void subarray2(int arr[],int n,int k)
{
  int right=0,left=0;
  int sum=arr[0];
  int maxlen=0;
  while(right<n)
  {
    while(left<=right && sum>k)
    {
      sum-=arr[left];
      left++;
    }
    if(sum == k)
    {
      maxlen=max(maxlen,right-left+1);
    }
    right++;
    if(right<n)
    {
       sum+=arr[right];
    }
  }
  cout<<"\nMaximum length : "<<maxlen;
}
int main()
{
  int n;
  cout<<"Enter array size : ";
  cin>>n;
  cout<<"enter array elements : ";
  int arr[n];
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  int k;
  cout<<"enter sum k : ";
  cin>>k;
  subarray(arr,n,k);
  subarray1(arr,n,k);
  subarray2(arr,n,k);
  return 0;
}