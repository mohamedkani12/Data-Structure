#include<iostream>
using namespace std;
int main()
{
  string s;
  cout<<"enter string : ";
  cin>>s;
  int q;
  cout<<"enter how many queries : ";
  cin>>q;
  cout<<"The given string is  "<<s<<endl;
  while(q--)
  {
    char c;
    cout<<"which char : ";
    cin>>c;
    int cnt=0;
    for(int i=0;i<s.size();i++)
    {
      if(s[i]==c)
        cnt++;
    }
    cout<<"Repeated "<<cnt<<" times\n";
  }
  return 0;
}