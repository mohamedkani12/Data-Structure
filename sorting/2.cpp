#include<iostream>
using namespace std;
int main()
{
  int n;
  cout<<"Enter array size : ";
  cin>>n;
  int arr[n];
  cout<<"Enter array elements : ";
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  cout<<"Sorting bubble sort \n";
  for(int i=n-1;i>=0;i--)
  {
    for(int j=0;j<=i-1;j++)
    {
      int didswap=0;
      if(arr[j]>arr[j+1])
      {
        int temp=arr[j+1];
        arr[j+1]=arr[j];
        arr[j]=temp;
        didswap=1;
      }
      if(didswap==0)
        break;
    }
  }
  for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
  return 0;
}