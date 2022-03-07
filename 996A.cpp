#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  cout<<n/100+(n%100)/20+(n%20)/10+(n%10)/5+(n%5)/1;
}


/////////////////////////////////////////////////////////////

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=0;
    cin>>n;
    while (n!=0)
    {
        if(n>=1 && n<5){
            count+=n/1;
            n=n%1;
            
        }
        if(n>=5 && n<10){
            count+=n/5;
            n=n%5;
        }

        if(n>=10 && n<20){
            count+=n/10;
            n=n%10;
            
        }

        if(n>=20 && n<100){
           count+=n/20;
            n=n%20;
            
        }

        if(n>100){
           count+=n/100;
            n=n%100;
            
        }
    }
    cout<<count<<endl;
    
}