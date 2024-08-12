#include<bits/stdc++.h>
using namespace std;
/*void majority(vector<int> arr,int n)
{
  vector<int> ls;
  for(int i=0;i<n;i++)
  {
    if(ls.size()==0 || ls[0]!=arr[i])
    {
      int cnt=0;
      for(int j=0;j<n;j++)
      {
        if(arr[i]==arr[j])
        {
          cnt+=1;
        }
      }
      if(cnt>n/3)
        ls.push_back(arr[i]);
      if(ls.size()==2)
        break;
    }
  }
  for(auto it:ls) 
    cout<<it<<" ";
}*/
/*void majority(vector<int> arr,int n)
{
  map<int,int> mpp;
  vector<int> ls;
  int mini=(int)n/3 + 1;
  for(int i=0;i<n;i++)
  {
    mpp[arr[i]]++;
    if(mpp[arr[i]]==mini)
      ls.push_back(arr[i]);
    if(ls.size()==2)
      break;
  }
  sort(ls.begin(),ls.end());
  for(auto it:ls) 
    cout<<it<<" ";
}*/
void majority(vector<int> arr,int n)
{
  int cnt1=0,cnt2=0,ele1=INT_MIN,ele2=INT_MIN;
  for(int i=0;i<n;i++)
  {
    if(cnt1==0 && ele2!=arr[i])
    {
      cnt1=1;
      ele1=arr[i];
    }
    else if(cnt2==0 && ele1!=arr[i])
    {
      cnt2=1;
      ele2=arr[i];
    }
    else if(ele1==arr[i]) cnt1++;
    else if(ele2==arr[i]) cnt2++;
    else
    {
      cnt1--;
      cnt2--;
    }
  }
  cnt1=0,cnt2=0;
  vector<int> ls;
  int mini=(int) n/3 + 1;
  for(int i=0;i<n;i++)
  {
    if(ele1==arr[i]) cnt1++;
    if(ele2==arr[i]) cnt2++;
  }
  if(cnt1 >= mini) ls.push_back(ele1);
  if(cnt2 >= mini) ls.push_back(ele2);
  sort(ls.begin(),ls.end());
  for(auto it:ls) 
    cout<<it<<" ";
}
int main()
{
  int n;
  cout<<"enter size of array : ";
  cin>>n;
  vector<int> arr;
  cout<<"enter array elements : "<<endl;
  for(int i=0;i<n;i++)
  {
    int num;
    cin>>num;
    arr.push_back(num);
  }
  majority(arr,n);
  return 0;
}