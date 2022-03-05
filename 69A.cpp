#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,a=0,b=0,c=0;
    cin>>n;
   n=n*3;
    vector<int> v;
    for (int i = 0; i < n ; i++)
    {
        int n;
        cin>>n;
        v.push_back(n);
    }
    for (int i = 0; i < n ; i+=3)
    {
        a+=v[i];
        b+=v[i+1];
        c+=v[i+2];
    }
    if(a==0 && b==0 && c==0)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
    
    
}