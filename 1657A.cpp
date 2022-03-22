#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        if(x==0 && y==0){
            cout<<0<<endl;
        }
        else{
            x=x*x;
            y=y*y;
            int s=sqrt(x+y);
            if(s*s==x+y){
                cout<<1<<endl;
            }
            else{
                cout<<2<<endl;
            }
        }
        
    }
}