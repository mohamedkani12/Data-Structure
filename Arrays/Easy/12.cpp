#include<iostream>
using namespace std;
void maximumconsecutiveone(int arr[],int n)
{
  int cnt=0;
  int maxi=0;
  for(int i=0;i<n;i++)
  {
    if(arr[i]!=0)
    {
      cnt++;
      maxi=max(maxi,cnt);
    }
    else{
      cnt=0;
    }
  }
  cout<<"Solution : "<<maxi;
}
int main()
{
  int n;
  cout<<"Enter array size : ";
  cin>>n;
  int arr[n];
  cout<<"Enter array elements : ";
  for(int i=0;i<n;i++)
    cin>>arr[i];
  maximumconsecutiveone(arr,n);
  return 0;
}