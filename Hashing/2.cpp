#include<iostream>
using namespace std;
int main()
{
  int n;
  cout<<"Enter an array size :  ";
  cin>>n;
  int arr[n];
  cout<<"enter array elements : ";
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  int hash[13]={0};
  for(int i=0;i<n;i++)
    hash[arr[i]]++;
  int q;
  cout<<"Enter how many queries : ";
  cin>>q;
  while(q>0)
  {
    int number;
    cout<<"enter number : ";
    cin>>number;
    cout<<"It repeated "<<hash[number]<<" times\n";
    q--;
  }
  return 0;
}