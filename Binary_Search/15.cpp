#include<iostream>                                                    
#include<bits/stdc++.h>                                                     
using namespace std;
int findMax(vector<int>& arr,int n){
  int maxi=INT_MIN;
  for(int i=0;i<n;i++){
    maxi = max(maxi,arr[i]);
  }
  return maxi;
}
int FindRequiredHour(int banana,vector<int>& arr,int n){
  int totalHours = 0;
  for(int i=0;i<n;i++){
    totalHours+= ceil((double)arr[i]/(double)banana);
  }
  return totalHours;
}
int KokoEatingBanana(vector<int>& arr,int hours,int n){
  int Limit = findMax(arr,n);
  int low=1,high=Limit;
  int ans=-1;
  while(low<=high){
    int mid=(low+high)/2;
    int totalHours = FindRequiredHour(mid,arr,n);
    if(totalHours<=hours){
      ans=mid;
      high=mid-1;
    }else{
      low=mid+1;
    }
  }
  return ans;
}
int main(){
  int n;
  cout<<"Enter the array size : ";
  cin>>n;
  vector<int> arr;
  for(int i=0;i<n;i++){
    int num;
    cin>>num;
    arr.push_back(num);
  }
  int hours ;
  cout<<"Enter the value of within hour : ";
  cin>>hours;
  int ans = KokoEatingBanana(arr,hours,n);
  cout<<"Answer : "<<ans; //minimum banana to eat per hour
  return 0;
}