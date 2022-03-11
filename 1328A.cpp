#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t,a,b,n=0;
    cin>>t;
    t=0;
    while(cin>>a>>b){  
        n=a%b;
        if(n!=0)
        n=b-n;
        cout<<n<<endl;
        //count=0;
    }
}

//  TLE soln.
#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t,a,b,count=0;
    cin>>t;
    t=0;
    while(cin>>a>>b){
        
        while(a%b!=0){
            a++;
            count++;
        }
        cout<<count<<endl;
        count=0;
    }
}