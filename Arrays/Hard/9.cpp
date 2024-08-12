#include<bits/stdc++.h>
#include<iostream>
using namespace std;
/*
void missingnumber(vector<int> &arr,int n)
{
  int repeatNumber=-1,missingnum=-1;
  for(int i=1;i<=n;i++)
  {
    int cnt=0;
    for(int j=0;j<n;j++)
    {
      if(arr[j]==i)
        cnt++;
    }
    if(cnt==2)  
    {
      repeatNumber=i;
    }
    else if(cnt==0) missingnum=i; 
    if(repeatNumber!=-1 && missingnum!=-1) break;
  }
  cout<<"\nRepeating number : "<<repeatNumber;
  cout<<"\nMissing number : "<<missingnum;

}
*/
/*void missingnumber(vector<int> &arr,int n)
{
  int hash[n+1]={0};
  for(int i=0;i<n;i++)
  {
    hash[arr[i]]++;
  }
  int repeatNum=-1,missingNum=-1;
  for(int i=1;i<=n;i++)
  {
    if(hash[i]==2) repeatNum=i;
    else if(hash[i]==0)  missingNum=i;
    if(repeatNum!=-1 && missingNum!=-1)
      break;
  }
  cout<<"\nRepeating number : "<<repeatNum;
  cout<<"\nMissing number : "<<missingNum;
}*/
void missingnumber(vector<int> &arr,int n){
  int S=(n*(n+1))/2;
  int S2=(n*(n+1)*(2*n+1))/6;
  int Sn=0,S2n=0;
  for(int i=0;i<n;i++)
  {
    Sn+=arr[i];
    S2n+=arr[i]*arr[i];
  }
  int val1=Sn-S;
  int val2=S2n-S2;
  val2=val2/val1;
  int x=(val1+val2)/2;
  int y=x-val1;
  cout<<"Repeating number : "<<x;
  cout<<"\nMissing number : "<<y;
}
int main()
{
  int n;
  cout<<"Enter array size : ";
  cin>>n;
  vector<int> arr;
  cout<<"enter array elements : \n";
  for(int i=0;i<n;i++)
  {
    int num;
    cin>>num;
    arr.push_back(num);
  }
  missingnumber(arr,n);
  return 0;
}
