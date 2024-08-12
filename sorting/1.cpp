#include<iostream>
using namespace std;
int main()
{
  int n;
  cout<<"enter array size : ";
  cin>>n;
  cout<<"Enter the array element : ";
  int arr[n];
  for(int i=0;i<n;i++)
    cin>>arr[i];
  cout<<"Using Selection sort \n";
  for(int i=0;i<=n-2;i++)
  {
    int min=i;
    for(int j=i;j<n;j++)
    {
      if(arr[j]<arr[min])
        min=j;
    }
    int temp=arr[min];
    arr[min]=arr[i];
    arr[i]=temp;
  }
  for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
  return 0;
}