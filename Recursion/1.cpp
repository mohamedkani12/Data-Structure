#include<iostream>
#include<vector>
using namespace std;
void f(int i,int n,vector<string> names){
    if(i>n){
        cout<<"Entered name lists"<<endl;
        for(auto it:names)
            cout<<it<<endl;
        return;
    }
    string name;
    cout<<"Enter name : ";
    getline(cin,name);
    names.push_back(name);
    f(i+1,n,names);
}
int main()
{
    vector<string> names;
    int n;
    cout<<"Enter how many times: ";
    cin>>n;
    cin.ignore();
    f(1,n,names);
    return 0;
}