#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n,count=1;
    string a,b;
    cin>>n;
    cin>>a;
    n--;
    while(n--){
        cin>>b;
        if(a[0]!=b[0])
        count++;
        a=b;
       // strcpy(a,b);
       // cout<<count<<endl;
    }
    cout<<count<<endl;
}