#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,b,x,y;
        cin>>n>>b>>x>>y;
        int s[n];
        s[0]=0;
        long long sm=0;
        for (int k = 1; k <= n; k++)
        {
            if (s[k-1]+x<=b)
            {
                s[k]=s[k-1]+x;
            }
            else
            {
                s[k]=s[k-1]-y;
            }
        }
        for (int k = 0; k <= n; k++)
        {
            sm+=s[k];
        }
        cout<<sm<<endl;
        
        
    }
}