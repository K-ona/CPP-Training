//created by Kona @VSCode
#include<bits/stdc++.h>

using namespace std;

#define LOCAL_TEST
#define rep(i, a, n) for (int i = a; i<n; i++)
#define per(i, a, n) for (int i = n - 1; i >= a; i--)
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(),(x).end()
#define fi first
#define se second
#define SZ(x) ((int)(x).size())
typedef vector<int> VI;
typedef long long ll;
typedef pair<int, int> PII;
typedef vector<pair<int, int>> VPII;
typedef map<int, int> MII;
const ll mod = 1000000007;
ll powmod(ll a, ll b) { ll res = 1; a %= mod; for (; b; b >>= 1) { if (b & 1) res = res * a % mod; a = a * a % mod;}return res;}
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a;}

int main()
{
    ios_base::sync_with_stdio(false); 
    #ifdef LOCAL_TEST
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    /* code */

    int _, n; 
    for (cin >> _; _ && _--; )
    {
        cin >> n; 
        if (n > 30)
        {
            cout << "YES" << endl; 
            if (n - 30 != 6 && n - 30 != 10 && n - 30 != 14)
                cout << 6 << ' ' << 10 << ' ' << 14 << ' ' << n - 30 << endl; 
            else 
                cout << 6 << ' ' << 10 << ' ' << 15 << ' ' << n - 31 << endl; 
        }
        else 
        {
            cout << "NO" << endl; 
        }
    }
    return 0;
}