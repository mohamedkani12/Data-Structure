#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the number : ";
    cin>>num;
    int originalnum=num;
    int digit=0;
    while(originalnum>0){
        originalnum/=10;
        digit++;
    }
    int arm=0;
    originalnum=num;
    while(num>0)
    {
        int l=num%10;
        int pows=1;
        int d=digit;
        while(digit>0)
        {
            pows=pows*l;
            digit--;
        }
        digit=d;
        arm=arm+pows;
        num/=10;
    }
    if(arm==originalnum)
        cout<<"Given number is Armstrong";
    else
        cout<<"Given number is not Armstrong";
    return 0;
}