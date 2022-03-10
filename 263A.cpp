//2nd sol.  BEST APPROACH
/*
#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int arr[5][5];
    int a,b,count=0;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>arr[i][j];
        }
    }
//searching
    for(a=0;a<5;a++){
        for(b=0;b<5;b++){
            if(arr[a][b]==1){
            goto c;
            }
        }
    }
    c: cout<<abs(a-2)+abs(b-2);
}
*/

// my soln:
#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int arr[5][5];
    int a,b,count=0;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>arr[i][j];
        }
    }
//searching
    for(a=0;a<5;a++){
        for(b=0;b<5;b++){
            if(arr[a][b]==1){
            goto c;
            }
        }
    }

    c: while(a!=2 || b!=2){
        if(a<2){
        a++;
        count++;
        }

        if(a>2){
        a--;
        count++;
        }

        if(b<2){
        b++;
        count++;
        }

        if(b>2){
        b--;
        count++;
        }

    }
   cout<<count<<endl;

}

