#include<iostream>
using namespace std;
void insertionsort(int arr[],int i,int n){
  if(i==n)  return;
  int j=i;
  while(j>0 && arr[j-1]>arr[j])
  {
    int temp=arr[j-1];
    arr[j-1]=arr[j];
    arr[j]=temp;
    j--;
  }
  insertionsort(arr,i+1,n);
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
  insertionsort(arr,0,n);
  cout<<"After sorting \n";
  for(int i=0;i<n;i++)
  {
    cout<<arr[i]<<" ";
  }
}