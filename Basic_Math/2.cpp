#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number : ";
    cin>>num;
    int dup=num;
    int rev=0;
    while(dup>0)
    {
        int l=dup%10;
        rev=(rev*10)+l;
        dup/=10;
    }
    if(rev==num)
    {
        cout<<"Given number is Pallindrome";
    }
    else{
        cout<<"The Given number is not palindrome";
    }
    return 0;
}