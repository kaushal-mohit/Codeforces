#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;
   vector<int> arr;
    arr.push_back(a+(b*c));
    arr.push_back(a*(b+c));
    arr.push_back(a*b*c);
    arr.push_back((a+b)*c);
    arr.push_back(a+b+c);
   // arr.push_back(b*(a+c));
    //sort(arr.begin(),arr.end());
    int max=*max_element(arr.begin(),arr.end());
    cout<<max<<endl;
}