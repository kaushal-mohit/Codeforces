#include <bits/stdc++.h>
using namespace std;

void solve()
{
    vector<int> v;
    int n;
    cin >> n;
    int m = 10;
    while (n)
    {
        if (n % m)
            v.push_back(n % m);
             n -= n % m;
        m *= 10;
       // cout<<n<<endl;
    }
    cout << v.size() << "\n";
    for (auto x : v)
        cout << x << " ";
    puts("");
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}