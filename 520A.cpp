#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int a[26]={0};
    for(int i=0;i<n;i++){
        if(s[i]<97){
            s[i]=s[i]+32;
            a[s[i]-'a']+=1;
        }
        else{
        a[s[i]-'a']+=1;
        }
    }
    
    for(int i=0;i<26;i++){
        if(a[i]==0){
        cout<<"NO";
        return 0;
        }
    }
    cout<<"YES";
    return 0;
    
}