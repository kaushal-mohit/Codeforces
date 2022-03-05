#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,count=0;
    cin>>t;
    string str;
    while (t--)
    { 
        cin>>str;
        if(str=="Tetrahedron")
        count+=4;
        else if(str=="Cube")
        count+=6;
        else if(str=="Octahedron")
        count+=8;
        else if(str=="Dodecahedron")
        count+=12;
        else if(str=="Icosahedron")
        count+=20;
        
    }cout<<count<<endl;
    
}

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,count=0;
    cin>>t;
    string str;
    while (t--)
    {
        cin>>str;
        if(str[0]=='T')
        count+=4;
        else if(str[0]=='C')
        count+=6;
        else if(str[0]=='O')
        count+=8;
        else if(str[0]=='D')
        count+=12;
        else if(str[0]=='I')
        count+=20;
        
    }cout<<count<<endl;
    
}