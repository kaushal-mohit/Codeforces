// best approach
#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin>>n;
    cout<<"I hate ";
    if(n>1){
        for(int i=2;i<=n;i++){
            if(i%2==0)
            cout<<"that I love ";
            else
            cout<<"that I hate ";
        }
    }
   cout<<"it";
}


//  2nd approach

#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    string str="I hate ";
    string love="that I love ";
    string hate="that I hate ";
    string it="it";
    cin>>n;
    if(n>1){
        for(int i=2;i<=n;i++){
            if(i%2==0)
            str.append(love);
            else
            str.append(hate);
        }
    }
    str.append(it);
    cout<<str;
}