#include<bits/stdc++.h>
using namespace std;
int FindValue(int Number,int n,int e){
  int ans=1;
  for(int i=1;i<=e;i++){
    ans = ans*n;
    if(ans>Number) return 2;
  }
  if(ans==Number) return 1;
  return 0;
}
int NthRoot(int n,int r){
  int low = 1,high = n;
  while(low<=high){
    int mid =(low+high)/2;
    if(FindValue(n,mid,r)==1) return mid;
    else if(FindValue(mid,n,r)==0) low=mid+1;
    else high=mid-1;
  }
  return -1;
}
int main(){
  int n;
  cout<<"enter the number : ";
  cin>>n;
  int r;
  cout<<"Enter the root : ";
  cin>>r;
  int ans = NthRoot(n,r);
  cout<<"Answer : "<<ans;
  return 0;
}