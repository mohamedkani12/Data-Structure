#include<iostream>
using namespace std;
bool prime1(int n)
{
    int cn=0;
    for(int i=1;i<=n;i++)
    {
        if(n==1){
        cout<<"Neither Prime Nor composite";
        return {};
    }
        if(n%i==0)
            cn++;
    }
    if(cn==2)
        cout<<"Given number is Prime";
    else 
        cout<<"Given number is Composite";
    return {};
}
int main()
{
    int num;
    cout<<"enter the number : ";
    cin>>num;
    prime1(num);
    return 0;
}
