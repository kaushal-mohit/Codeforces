#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a[3];
	cin>>a[0]>>a[1]>>a[2];
	sort(a,a+3);
	cout<<(a[2]-a[0]);
}

////////////////////////////////////////////

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n=3,mid=0;
    int arr[n];
    cin>>arr[0]>>arr[1]>>arr[2];
    int max=*max_element(arr, arr + n);
    int min=*min_element(arr, arr + n);
    // for (int i = 0; i < n; i++){
    //     if(arr[i]>=min && arr[i]<=max)
    //     mid=arr[i];
    // }
    int dis=max-min;
    //dis=(max-mid)+(mid-min);
    cout<<dis;

}