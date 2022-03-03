/*   BEST APPROACH
#include<bits/stdc++.h>
using namespace std;
int main(){
string a;
cin>>a;
a[0]=toupper(a[0]);
cout<<a;
}
*/ 

#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    if(s[0]>=65&&s[0]<=90)
    cout<<s;
    else{
        s[0]=s[0]-32;
        cout<<s;
    }
}