#include<bits/stdc++.h>
using namespace std;
int main(){
    int c;
    cin>>c;
    while(c--){
        int t;
        cin>>t;
        if(t<=2)
        cout<<"0"<<endl;
        else if(t>2){
        int d=t/2;
        //d=floor(d);
        cout<<t-d-1<<endl;
        }
    }
}

