#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void print1(int n){
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            cout<<i<<" ";
        }
    }
}
void print2(int n){
    vector<int> ls;
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0)
        {
            ls.push_back(i);
            if(n/i!=i)
                ls.push_back(n/i);
        }
    }
    sort(ls.begin(),ls.end());
    for(auto it:ls)
        cout<<it<<" ";
}
int main(){
    int num;
    cout<<"enter the number : ";
    cin>>num;
    print1(num);
    cout<<endl;
    print2(num);
    return 0;
}