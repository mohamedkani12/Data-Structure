#include<iostream>
using namespace std;
int main(){
  int n;
  int r;
  cout<<"Enter how many number : ";
  cin>>n;
  cout<<"Enter the range : ";
  cin>>r;
  cout<<"Random number between the range "<<r<<endl;
  for(int i = 0 ;i<n;i++){
    int rn = (rand()%r);
    rn = (rn==0)?1:rn; // 0 to range in between
    cout<<rn<<" ";
  }
  return 0;
}