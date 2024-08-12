#include<bits/stdc++.h>
using namespace std;
void bubblesort(int arr[],int n)
{
  if(n==1)
    return ;
  int didswap=0;
  for(int j=0;j<=n-2;j++)
  {
    if(arr[j]>arr[j+1])
    {
      int temp=arr[j+1];
      arr[j+1]=arr[j];
      arr[j]=temp;
      didswap=1;
    }
  }
  if(didswap==0)
    return;
  bubblesort(arr,n-1);
}
int main()
{
  int n;
  cout<<"Enter an array size : ";
  cin>>n;
  cout<<"Enter array elements : ";
  int arr[n];
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  bubblesort(arr,n);
  cout<<"After sorting \n";
  for(int i=0;i<n;i++)
  {
    cout<<arr[i]<<" ";
  }
}