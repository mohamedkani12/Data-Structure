#include<bits/stdc++.h>
using namespace std;
int KthElement(vector<int>& arr1,int n1,vector<int>& arr2,int n2,int k){
  if(n1>n2) return KthElement(arr2,n2,arr1,n1,k);
  int left = k;
  int low=max(k-n2,0),high=min(k,n1);
  while(low<=high){
    int mid1=(low+high)/2;
    int mid2=left-mid1;
    int l1 = INT_MIN;
    int l2=INT_MIN;
    int r1=INT_MAX;
    int r2=INT_MAX;
    if(mid1<n1) r1=arr1[mid1];
    if(mid2<n2) r2=arr2[mid2];
    if(mid1-1>=0) l1=arr1[mid1-1];
    if(mid2-1>=0) l2=arr2[mid2-1];
    if(l1<=r2 && l2<=r1){
      return max(l1,l2);
    }
    else if(l1>r2){
      high=mid1-1;
    }
    else{
      low=mid1+1;
    }
  }
  return 0;
}
int main(){
  int n1,n2;
  cout<<"Enter the First array size : ";
  cin>>n1;
  cout<<"Enter the Second Array size : ";
  cin>>n2;
  vector<int> arr1,arr2;
  for(int i=0;i<n1;i++){
    int num;
    cin>>num;
    arr1.push_back(num);
  }
  for(int i=0;i<n2;i++){
    int num;
    cin>>num;
    arr2.push_back(num);
  }
  int k;
  cout<<"Enter the kth value : ";
  cin>>k;
  int ans=KthElement(arr1,n1,arr2,n2,k);
  cout<<"Answer : "<<ans;
  return 0;
}