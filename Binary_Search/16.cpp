#include<iostream>                                                    
#include<bits/stdc++.h>                                                     
using namespace std;
bool possible(vector<int>& arr,int days,int needed,int adjacent){
  int cnt=0,numberOfBouque=0;
  int n = arr.size();
  for(int i=0;i<n;i++){
    if(arr[i]<=days){
      cnt++;
    }
    else{
      numberOfBouque+= (cnt/adjacent);
      cnt=0;
    }
  }
  numberOfBouque+=(cnt/adjacent);
  if(numberOfBouque>=needed) return true;
  return false;
}
int FindMinimumDays(vector<int>& arr,int n,int m,int k){
  int mini = INT_MAX,maxi = INT_MIN;
  for(int i=0;i<n;i++){
    mini = min(arr[i],mini);
    maxi = max(arr[i],maxi);
  }
  for(int i=mini;i<=maxi;i++){
    if(possible(arr,i,m,k)==true){
      return i;
    }
  }
  return -1;
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
  int BougeiNeeded ;
  cout<<"Enter How much needed ? ";
  cin>>BougeiNeeded;
  int Adjacents ;
  cout<<"Enter the adjacent : ";
  cin>>Adjacents;
  int ans = FindMinimumDays(arr,n,BougeiNeeded,Adjacents);
  cout<<"Answer : "<<ans;
  //ans=*max_element(arr.begin(),arr.end());
  return 0;
}