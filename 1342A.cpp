#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int x,y,a,b,d=0;
        cin>>x>>y>>a>>b;
        int mn=min(x,y);
        int mx=max(x,y);
        if(x==0 && y==0){
            cout<<0<<endl;
            return 0;}
        for (int i = 0;mx!=0 && mn!=0; i++)
        {
            if (mx!=mn)
            {
                mx--;
                d+=a;
                continue;
            }
            else{
                mx--;
                mn--;
                d+=b;
            }
            
        }
        cout<<d<<endl;
        
       //cout<<mn;
        // else{
        //     while(x!=0 && y!=0){
        //         cout<<" ";
        //     }
        // }
    }
    
}