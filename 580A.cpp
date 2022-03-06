#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int count=1;
    vector<int> s;
    for (int i = 0; i < n-1; i++)
    {
        if(arr[i+1]<arr[i]){
        s.push_back(count);
        count=1;
        }
        else
        count++;

    }
    s.push_back(count);
    int max=*max_element(s.begin(), s.end());
    // if(count==n)
    // cout<<count;
    // else
    cout<<max;
    
}