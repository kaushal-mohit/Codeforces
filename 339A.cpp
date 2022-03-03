#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    string str;
    int a=0;
    cin>>s;
    for (int i = 0; i < s.length(); i++)
    {
        if(i%2==0){
            str.push_back(s[i]);
        //str[a]=s[i];
        //cout<<"str[a]: "<<str[a]<<" s[i]: "<<s[i]<<endl;
        a++;
        }
    }
    a=0;
    sort(str.begin(),str.end());
    //cout<<str;
    for (int i = 0; i < s.length(); i++)
    {
        if(i%2==0){
        s[i]=str[a];
        a++;
        }
    }
    cout<<s;
}