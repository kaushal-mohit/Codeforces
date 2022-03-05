#include <bits/stdc++.h>
using namespace std;
int find(string str, string s[], int m){
    for (int i = 0; i < m; i++)
        {
            if(str==s[i])
            return i;
            else
            continue;
        }
}
int main(){
    int n,m;
    cin>>n>>m;
    //int a[m*2];
    string s[m*2];
     m=m*2;
    for (int i = 0; i < m; i++)
    {
        cin>>s[i];
    }
    string f[n];
    for (int i = 0; i < n; i++)
    {
        cin>>f[i];
    }
    for (int i = 0; i < n; i++)
    {
        //cin>>s[i];
        string str=f[i];
        int p=find(str,s,m);
        if(p%2==0){
            string s1=s[p];
            string s2=s[p+1];
            if(s1.length()==s2.length())
            cout<<s1<<" ";
            else if(s1.length()<s2.length())
            cout<<s1<<" ";
            else
            cout<<s2<<" ";
        }
        if(p%2!=0){
            string s2=s[p];
            string s1=s[p-1];
            if(s1.length()==s2.length())
            cout<<s1<<" ";
            else if(s1.length()<s2.length())
            cout<<s1<<" ";
            else
            cout<<s2<<" ";
        }
    }
    //cout<<s[0]<<" "<<s[1];
    
}