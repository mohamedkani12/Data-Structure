#include<bits/stdc++.h>
using namespace std;
vector<int> optimalApproach(vector<vector<int>>& arr,int n,int m,int k){
  int row=0;
  int col=m-1;
  while(row<n && col>=0){
    if(arr[row][col]==k)
      return {row,col};
    else if(arr[row][col]<k)
      row++;
    else
      col--;
  }
  return {-1,-1};
}
int main(){
  int row,col;
  cout<<"Enter row  size: ";
  cin>>row;
  cout<<"Enter column size: ";
  cin>>col;
  vector<vector<int>> arr;
  for(int i=0;i<row;i++){
    vector<int> ans;
    for(int j=0;j<col;j++){
      int num;
      cin>>num;
      ans.push_back(num);
    }
    arr.push_back(ans);
  }
  int k;
  cout<<"Enter the Search element : ";
  cin>>k;
  vector<int> ans=optimalApproach(arr,row,col,k);
  cout<<"Answer \n";
  cout<<"Row : "<<ans[0];
  cout<<"\nColumn : "<<ans[1];
  return 0;
}