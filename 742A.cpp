#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n==0)
   { cout<<1<<endl;
    return 0;}
    //long long m=pow(8,n);
    // cout<<m<<endl;
    // string str= to_string(m);  
    // //cout<<str<<endl;
    // //m=str.end();
    // long long l= str.length();
    // //cout<<l<<endl;
    // cout<<str[l-1];
    int r=n%4;
    if(r==1)
    cout<<8<<endl;
    if(r==2)
    cout<<4<<endl;
    if(r==3)
    cout<<2<<endl;
    if(r==0)
    cout<<6<<endl;


}