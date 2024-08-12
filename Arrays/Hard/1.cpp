#include<iostream>
#include<bits/stdc++.h>
using namespace std;
/*int funcNcr(int row,int col)
{
  long long res=1;
  for(int i=0;i<col;i++)
  {
    res=res*(row-i);
    res=res/(i+1);
  }
  return res;
}*/
vector<int> generateRow(int row){
  vector<int> ansRow;
  long long res=1;
  ansRow.push_back(res);
  for(int col=1;col<row;col++)
  {
    res=res*(row-col);
    res=res/col;
    ansRow.push_back(res);
  }
  return ansRow;
}
void pascal(int n)
{
  vector<vector<int>> ans;
  for(int i=1;i<=n;i++)
  {
    vector<int> temp=generateRow(i);
    ans.push_back(temp);
  }
  for(auto it:ans)
  {
    for(auto i:it)
      cout<<i<<" ";
    cout<<endl;
  }
}
int main()
{
  int row;
  cout<<"enter nth value: ";
  cin>>row;
  pascal(row);
  return 0;
  /*
  int row,col;
  cout<<"1.Enter row and column number : ";
  cin>>row>>col;
  cout<<"Respeective value : "<<funcNcr(row-1,col-1)<<endl;
  cout<<"Give me the row number : ";
  cin>>row;*/
  /*
      O(row*col)
  for(int i=1;i<=row;i++)
  {
    cout<<funcNcr(row-1,i-1)<<" ";
  }
  *//*
  int ans=1;
  cout<<ans<<" ";
  for(int i=1;i<row;i++)
  {
    ans=ans*(row-i);
    ans=ans/i;
    cout<<ans<<" ";
  }*/
}