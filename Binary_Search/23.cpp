#include<iostream>                                                    
#include<bits/stdc++.h>                                                     
using namespace std;
long double BruteminimiseMaxDistance(vector<int>& arr,int k){
  int n=arr.size();
  vector<int> howMany(n-1,0);
  for(int gasStation=1;gasStation<=k;gasStation++){
    long double maxSection = -1;
    int maxInd=-1;
    for(int i=0;i<n-1;i++){
      long double diff = arr[i+1]-arr[i];
      long double sectionLength = diff/(long double)(howMany[i]+1);
      if(maxSection<sectionLength){
        maxSection = sectionLength;
        maxInd=i;
      }
    }
    howMany[maxInd]++;
  }
  long double maxAns = -1;
  for(int i=0;i<n-1;i++){
    long double initialDiff = arr[i+1]-arr[i];
    long double sectionLength = initialDiff/(long double)(howMany[i]+1);
    maxAns = max(maxAns,sectionLength);
  }
  return maxAns;
}
long double BetterminimiseMaxDistance(vector<int>& arr,int k){
  priority_queue<pair<long double,int>> pq;
  int n=arr.size();
  for(int i=0;i<n-1;i++){
    pq.push({arr[i+1]-arr[i],i});
  }
  vector<int> howMany(n-1,0);
  for(int i=1;i<=k;i++){
    auto top = pq.top();
    pq.pop();
    int SecIndex = top.second;
    howMany[SecIndex]++;
    long double initialDiff = arr[SecIndex+1]-arr[SecIndex];
    long double newSecLen = initialDiff/(howMany[SecIndex]+1);
    pq.push({newSecLen,SecIndex});
  }
  return pq.top().first;
}
int numberOfGasStationsRequired(long double dist, vector<int> &arr) {
  int n = arr.size(); // size of the array
  int cnt = 0;
  for (int i = 1; i < n; i++) {
    int numberInBetween = ((arr[i] - arr[i - 1]) / dist);
    if ((arr[i] - arr[i - 1]) == (dist * numberInBetween)) {
      numberInBetween--;
    }
    cnt += numberInBetween;
  }
  return cnt;
}
long double OptimalminimiseMaxDistance(vector<int>& arr,int k){
  int n=arr.size();
  long double low=0;
  long double high=0;
  for(int i=0;i<n-1;i++){
    high=max(high,(long double)arr[i+1]-arr[i]);
  }
  long double diff = 1e-6;
  while(high-low>diff){
    long double mid=(low+high)/2;
    int cnt = numberOfGasStationsRequired(mid,arr);
    if(cnt>k) low=mid;
    else high=mid;
  }
  return high;
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
  int k;
  cout<<"Enter K Gas Station: ";
  cin>>k;
  long double ans=BruteminimiseMaxDistance(arr,k);
  cout<<"Brute force \n";
  cout<<"The answer is "<<ans;
  cout<<"\nBetter Solution \n";
  ans = BetterminimiseMaxDistance(arr,k);
  cout<<"The answer is "<<ans;
  cout<<"\noptimal Solution \n";
  ans=OptimalminimiseMaxDistance(arr,k);
  cout<<"The answer is "<<ans;
  return 0;
}