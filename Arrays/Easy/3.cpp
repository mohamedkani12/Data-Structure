#include<iostream>
using namespace std;
void sorted(int arr[],int n)
{
  int flag=0;
  for(int i=1;i<n;i++)
  {
    if(arr[i]>=arr[i-1])
    {
      flag=1;
    }
    else{
      flag=0;
    }
  }
  if(flag)
  {
    cout<<"Array is sorted";
  }
  else{
    cout<<"Array is not Sorted";
  }
}
using namespace std;
int main()
{
  int n;
  cout<<"Enter array size : ";
  cin>>n;
  cout<<"Enter array elements : ";
  int arr[n];
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  sorted(arr,n);
  return 0;
}