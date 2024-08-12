#include<iostream>                                                    
#include<bits/stdc++.h>                                                     
using namespace std;
int SquareRoot(int n){
  int low = 1,high = n;
  int ans=1;
  while(low<=high){
    int mid=(low+high)/2;
    if(mid*mid <= n){
      ans=mid;
      low = mid+1;
    }
    else{
      high = mid-1;
    }
  }
  return ans;
}
int main(){
  int n;
  cout<<"Enter the number : ";
  cin>>n;
  int ans=SquareRoot(n);
  cout<<"Answer : "<<ans;
  return 0;
}