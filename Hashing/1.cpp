#include<iostream>
#include<vector>
using namespace std;
void f(vector<int> arr,int num)
{
  int cnt=0;
  for(int i=0;i<arr.size();i++)
  {
    if(arr[i]==num)
      cnt++;
  }
  cout<<"The number repeated in "<<cnt<<" times"<<endl;
}
int main()
{
  int n;
  cout<<"Enter an array size : ";
  cin>>n;
  cout<<"Enter array elements : ";
  vector<int> arr;
  for(int i=0;i<n;i++)
  {
    int number;
    cin>>number;
    arr.push_back(number);
  }  
  cout<<"How many queries : ";
  int q;
  cin>>q;
  while(q>0)
  {
    int num;
    cout<<"Enter number : ";
    cin>>num;
    f(arr,num);
    q--;
  }
  return 0;
}