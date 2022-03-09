#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n,i,count=0;
    cin>>n;
    int a=n;
    while(n--){
        cin>>i;
        if(i==0)
        count++;
    }
    if(count==a)
    cout<<"EASY"<<endl;
    else
    cout<<"HARD"<<endl;
}