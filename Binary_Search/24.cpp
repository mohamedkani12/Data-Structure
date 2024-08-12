#include<iostream>                                                    
#include<bits/stdc++.h>                                                     
using namespace std;
double BruteForce(vector<int>& arr1,int n1,vector<int>& arr2,int n2){
  int n=n1+n2;
  vector<int> arr3;
  int i=0,j=0;
  while(i<n1 && j<n2){
    if(arr1[i]<=arr2[j]){
      arr3.push_back(arr1[i]);
      i++;
    }
    else{
      arr3.push_back(arr2[j]);
      j++;
    }
  }
  while(i<n1){
    arr3.push_back(arr1[i]);
    i++;
  }
  while(j<n2){
    arr3.push_back(arr2[j]);
    j++;
  }
  if(n%2==1) return arr3[n/2];
  int ans=(arr3[n/2]+arr3[(n/2)-1])/2;
  return ans;
}
double BetterApproach(vector<int>& arr1,int n1,vector<int>& arr2,int n2){
  int n = n1+n2;
  int ind2 = n/2;
  int ind1 = ind2-1;
  int i=0,j=0;
  int cnt = 0;
  int el1=-1,el2=-1;
  while(i<n1 && j<n2){
    if(arr1[i]<=arr2[j]){
      if(ind1==cnt){
        el1=arr1[i];
      }
      if(ind2==cnt){
        el2=arr1[i];
      }
      cnt++;
      i++;
    }
    else{
      if(ind1==cnt){
        el1=arr2[j];
      }
      if(ind2==cnt){
        el2=arr2[j];
      }
      cnt++;
      j++;
    }
  }
  while(i<n1){
    if(ind1==cnt){
      el1=arr1[i];
    }
    if(ind2==cnt){
      el2=arr1[i];
    }
    i++;
  }
  while(j<n2){
    if(ind1==cnt){
      el1=arr2[j];
    }
    if(ind2==cnt){
      el2=arr2[j];
    }
    j++;
  }
  if(n%2==1) return el2;
  return (el1+el2)/2;
}
double OptimalApproach(vector<int>& arr1,int n1,vector<int>& arr2,int n2){
  if(n1>n2) return OptimalApproach(arr2,n2,arr1,n1);
  int low=0,high = n1;
  int left = (n1+n2+1)/2;
  int n=n1+n2;
  while(low<=high){
    int mid1=(low+high)/2;
    int mid2=left-mid1;
    int l1=INT_MIN,l2=INT_MIN;
    int r1=INT_MAX,r2=INT_MAX;
    if(mid1<n1) r1=arr1[mid1];
    if(mid2<n2) r2=arr2[mid2];
    if(mid1-1>=0) l1=arr1[mid1-1];
    if(mid2-1>=0) l2=arr2[mid2-1];
    if(l1<=r2 && l2<=r1){
      if(n%2==1) return max(l1,l2);
      int el1 = max(l1,l2);
      int el2=min(r1,r2);
      return (el1+el2)/2;
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
  double ans = BruteForce(arr1,n1,arr2,n2);
  cout<<"Answer : "<<ans<<endl;
  ans = BetterApproach(arr1,n1,arr2,n2);
  cout<<"Answer : "<<ans<<endl;
  ans=OptimalApproach(arr1,n1,arr2,n2);
  cout<<"Answer : "<<ans<<endl;
  return 0;
}