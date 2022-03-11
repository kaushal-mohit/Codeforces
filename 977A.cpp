#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,l;
    cin>>n>>k;
    while (k--)
    {
        l=n%10;
        if(l!=0)
        n--;
        else if(l==0)
        n=n/10;
    }
    cout<<n;
    
}