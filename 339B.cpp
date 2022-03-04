#include<bits/stdc++.h>
using namespace std;
 
int main(){
    long long n,m,s=1,x,sum=0;
    cin>>n>>m;
    while(m--)
    {
        cin>>x;
        sum+=(x-s+n)%n;
        s=x;
    }
    cout<<sum<<endl;
    
}




#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n,m;
    cin>>n>>m;
    int a[m];
    for (int i = 0; i < m; i++)
    {
        cin>>a[i];
    }
    int count=a[0];
    for (int i = 0; i < m-1; i++){
        if(a[i]==a[i+1])
        continue;

        if(i!=0)
        count+=a[i];
        if(a[i+1]<a[i]){
        int d=n-a[i];
        count+=d;}
        else
        {int d=a[i+1]-a[i];
        count+=d;}
        
    }
    cout<<count-1;
}