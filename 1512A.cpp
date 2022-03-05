#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n,i,k=0;
    cin>>n;
    int str[n];
    for (int i = 0; i < n; i++)
    {
        cin>>str[i];
    }
    if(str[0]==str[1])
     k=str[0];
    else
    k=str[2];
    for ( i = 0; i < n; i++)
    {
        if(str[i]!=k){
        cout<<i+1<<endl;
        }
    }
    
    return;
    

}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}