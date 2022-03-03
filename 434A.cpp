#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s[n];
    for(int i=0; i<n; ++i)
        cin>>s[i];
    sort(s,s+n);
    for(int i=0; i<n; ++i)
    cout<<s[i]<<" ";
    cout<<endl<<s[n/2];
}

/* Weak test case 😂😂😂 LOL...
try this
5
A
B
C
A
D

A A B C D
B
*/



///  MY brute force approach but not sol. is not complete 😢😢
 
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<string> s;
    for (int i = 0; i < n; i++)
    {
        string str;
        cin>>str;
        s.push_back(str);
    }
    sort(s.begin(),s.end());
    for (int i = 0; i < n; i++)
    {
        //cout<<s[i]<<" ";
        int index=s[i];
    }
    //cin>>s;
    //cout<<s[0]<<" "<<s[1]<<" "<<s;
}

