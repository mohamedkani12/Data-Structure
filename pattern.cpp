#include<iostream>
using namespace std;
void print1(int n){
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
			cout<<"* ";
		cout<<endl;
	}
}
void print2(int n){
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<=i;j++)
			cout<<"* ";
		cout<<endl;
	}
}
void print3(int n){
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
			cout<<j;
		cout<<endl;
	}
}
void print4(int n){
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
			cout<<i;
		cout<<endl;
	}
}
void print5(int n){
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-i;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
}
void print6(int n){
	for(int i=0;i<n;i++){
		for(int j=1;j<=n-i;j++)
			cout<<j;
		cout<<endl;
	}
}
void print7(int n){
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-i-1;j++)
			cout<<" ";
		for(int j=0;j<2*i+1;j++)
			cout<<"*";
				for(int j=0;j<n-i-1;j++)
			cout<<" ";
		cout<<endl;
	}
}
void print8(int n){
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<i;j++)
			cout<<" ";
		for(int j=0;j<2*n-(2*i+1);j++)
			cout<<"*";
		for(int j=0;j<i;j++)
			cout<<" ";
		cout<<endl;
	}
}
void print10(int n){
	for(int i=1;i<=2*n-1;i++)
	{
		int stars=i;
		if(i>n)
		{
			stars=2*n-i;
		}
		for(int j=1;j<=stars;j++)
			cout<<"*";
		cout<<endl;
	}
}
void print11(int n)
{
	for(int i=0;i<n;i++)
	{
		int start=1;
		if(i%2==0)
			start=1;
		else
			start=0;
		for(int j=0;j<=i;j++)
		{
				cout<<start;
				start=1-start;
		}
		cout<<endl;
	}
}
void print12(int n)
{
	int space=2*(n-1);
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
			cout<<j;
		for(int j=1;j<=space;j++)
			cout<<" ";
		for(int j=i;j>=1;j--)
		cout<<j;
		cout<<endl;
		space-=2;
	}
}
void print13(int n){
	int number=1;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{	cout<<number<<" ";
			number++;
		}
		cout<<endl;
		
	}
}
/*
void print14(int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<=i;j++)
		{
			cout<<char(65+j);
		}
		cout<<endl;
	}
}
*/
void print14(int n){
	for(int i=0;i<n;i++)
	{
		for(char ch='A'; ch<='A'+i;ch++)
			cout<<ch<<" ";
		cout<<endl;
	}
}
// void print15(int n){
// 	for(int i=0;i<n;i++)
// 	{
// 		for(char ch='A'; ch<'A'+(n-i);ch++)
// 			cout<<ch<<" ";
// 		cout<<endl;
// 	}
// }
void print15(int n){
	for(int i=n;i>0;i--)
	{
		for(int j=0;j<i;j++){
			cout<<char(65+j);
		}
		cout<<endl;
	}
}
void print16(int n)
{
	for(int i=0;i<n;i++)
	{
		char ch='A'+i;
		for(int j=0;j<=i;j++)
			cout<<ch;
		cout<<endl;
	}
}
void print17(int n)
{
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n-i-1;j++)
      cout<<" ";
    char ch='A';
    for(int j=0;j<2*i+1;j++)
    {	
      int breakpoint=(2*i+1)/2;
      cout<<ch;
      if(j<breakpoint)  ch++;
      else ch--;
    }
    for(int j=0;j<n-i-1;j++)
     cout<<" ";
    cout<<endl;
  }
}
void print18(int n){
  char ch=65+n-1;
  for(int i=0;i<n;i++)
  {
    for(char ch1=ch-i;ch1<=ch;ch1++)
      cout<<ch1;
    cout<<endl;
  }
}
void print19(int n)
{
  int ilspace=0;
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n-i;j++)
      cout<<"*";
    for(int j=0;j<ilspace;j++)
      cout<<" ";
    for(int j=0;j<n-i;j++)
      cout<<"*";
	ilspace+=2;
    cout<<endl;
  }
  ilspace=2*n-2;
  for(int i=0;i<n;i++)
  {
	for(int j=0;j<=i;j++)
		cout<<"*";
	for(int j=0;j<ilspace;j++)
		cout<<" ";
	for(int j=0;j<=i;j++)
		cout<<"*";
	ilspace-=2;
	cout<<endl;
  }
  cout<<ilspace;
}
void print20(int n){
	int space=2*n-2;
	for(int i=1;i<=2*n-1;i++)
	{
		//star
		//space
		//star
		int star=i;
		if(i>n) star=2*n-i;
		for(int j=1;j<=star;j++)
			cout<<"*";
		for(int j=0;j<space;j++)
			cout<<" ";
		for(int j=1;j<=star;j++)
			cout<<"*";
		if(i<n) space-=2;
		else space+=2;
		cout<<endl;
	}
}
void print21(int n){
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i==0 || j==0 || i==n-1 || j==n-1)
				cout<<"*";
			else 
				cout<<" ";
		}
		cout<<endl;
	}
}
void print22(int n){
	for(int i=0;i<2*n-1;i++)
	{
		for(int j=0;j<2*n-1;j++)
		{
			int top=i;
			int left=j;
			int bottom=2*n-2-i;
			int right=2*n-2-j;
			cout<<n-min(min(top,bottom),min(left,right));
		}
		cout<<endl;
	}
}
void symmetry(int n) {
    // Write your code here.
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++)
            cout<<"*";
        for(int j=0;j<2*i;j++)
            cout<<" ";
        for(int j=0;j<n-i;j++)
            cout<<"*";
        cout<<endl;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++)
            cout<<"*";
        for(int j=0;j<2*(n-i)-2;j++)
            cout<<" ";
        for(int j=0;j<=i;j++)
            cout<<"*";
        cout<<endl;
    }
}
int main()
{
	int n;
	cout<<"Enter no. of lines : ";
	cin>>n;
	symmetry(n);
	return 0;
}
