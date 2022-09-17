#include "bits/stdc++.h"

using namespace std;

// Macros
#define int long long
#define ll long long
#define ld long double

// Constants
constexpr long long SZ = 1e5 + 7;
constexpr long long inf = 1e18;
constexpr long long mod = 1e9 + 7;
constexpr long long MOD = 998244353;
constexpr long double PI = 3.141592653589793238462;

// Macros
#define vt vector // not cool
#define pb push_back
#define all(X) (X).begin(), (X).end()
#define allr(X) (X).rbegin(), (X).rend()
#define sz(X) (int)X.size()

// Extras
#define fi first
#define se second
#define endl '\n'

// Modulo Arithmetic
int modadd(int a, int b, int m = mod) { a = a % m; b = b % m; return (((a + b) % m) + m) % m; }
int modsub(int a, int b, int m = mod) { a = a % m; b = b % m; return (((a - b) % m) + m) % m; }
int modmul(int a, int b, int m = mod) { a = a % m; b = b % m; return (((a * b) % m) + m) % m; }


// GCD
int gcd(int a, int b) { if (b == 0) { return a; } return gcd(b, a % b); }

// LCM
int lcm(int a, int b) { return (a / gcd(a, b)) * b; }


// Directions
const int dx[8] = {0, 1, -1, 0, -1, -1, 1, 1};
const int dy[8] = {1, 0, 0, -1, 1, -1, -1, 1};


// prime number check
bool isPrime(ll n) 
{
    for(int i = 2; i * i <= n; i++) {
        if(n % i == 0) return false;
    }
    return true;
}


// input vector values
void inputVector(vector<int>& v) 
{
    for(auto& x: v) {
        cin >> x;
    }
}

// perfect square check
bool isPerfectSq(ll n)
{
    ll sq = sqrt(n);
    return sq * sq == n;
}

void solve()
{
    int n,k,l,c,d,p,nl,np;  cin >> n>>k>>l>>c>>d>>p>>nl>>np;
    int tot_drink=(k*l)/nl,tos=c*d;
    cout<<min(tot_drink, min(p/np, tos))/n<<endl;
    
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t = 1;
    // /is Single Test case?/ 
    // cin >> t;
    while (t--) {
        solve();
    }

    // cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}
/* Thanking Almighty !! The Intellectual Odyssey Rages On */