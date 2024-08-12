#include<iostream>
using namespace std;
int main()
{
  string s;
  cout<<"Enter string : ";
  cin>>s;
  int hash[26]={0};
  for(int i=0;i<s.size();i++)
  {
    hash[s[i]-'a']++;
  }
  int q;
  cout<<"enter how many queries : ";
  cin>>q;
  cout<<"\nThe given string is "<<s<<endl;
  while(q>0)
  {
    char c;
    cout<<"Enter char  : ";
    cin>>c;
    cout<<"Repeated "<<hash[c-'a']<<" times \n";
    q--;
  }
  return 0;
}