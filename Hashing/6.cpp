#include<iostream>
#include<vector>
using namespace std;
void countfreq(int arr[],int n)
{
  vector<bool> isvisited(n,false);
  for(int i=0;i<n-1;i++)
  {
    int cnt=1;
    if(isvisited[i])
    {
      continue;
    }
    isvisited[i]=true;
    for(int j=i+1;j<n;j++){
      if(arr[i]==arr[j])
      {
        cnt++;
        isvisited[j]=true;
      }
    }

    cout<<arr[i]<<" - > "<<cnt<<endl;
  }
}
int main()
{
  int n;
  cout<<"Enter array size : ";
  cin>>n;
  int arr[n];
  cout<<"enter array elements  \n";
  for(int i=0;i<n;i++)
    cin>>arr[i];
  countfreq(arr,n);
  return 0;
}