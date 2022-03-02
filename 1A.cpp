#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n,m,a,n_c=0,m_c=0;
    cin>>n>>m>>a;
    while(n>0){
    n_c+=n/a;
    if(n%a){
        n_c+=1;
      // cout<<"e"<<endl;
        n=0;
    }
    else
    n=0;
    //n=n-a;
    }

    while(m>0){
    m_c+=m/a;
    if(m%a){
        m_c+=1;
        //cout<<"e"<<endl;
        m=0;
    }
    else
    m=0;
    }
    cout<<n_c*m_c;
}