#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,rem,count=0;
    cin>>n;
    while(n){
        rem=n%10;
        if(rem==4 || rem==7)
        count++;
        n=n/10;
    }
    // string n;
    // int rem,count=0;
    // cin>>n;
    // for(int i=0;i<n.size();i++){
    //     if(n[i]=='4' || n[i]=='7')
    //     count++;
    // }
    if(count==4 || count==7)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
}