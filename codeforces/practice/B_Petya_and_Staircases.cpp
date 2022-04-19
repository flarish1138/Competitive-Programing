#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define rep(i, a, b) for (i = a; i < b; ++i)
#define repr(i, a, b) for (i = a; i >= b; --i)
#define nline "\n"

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;

//1.DP se soch
//2.DP se soch
//3.DP se soch
//graph, gcd, BS, seive
//if NOTA,then
//brute force hi optimal h

void solve()
{
    int i;
    ll n, m;
    cin >> n >> m;
    set<ll> s;
    rep(i, 0, m)
    {
        int x;
        cin >> x;
        s.insert(x);
        if (x == 1 || x == n)
        {
            cout << "NO";
            return;
        }
        if (s.count(x - 2) && s.count(x - 1))
        {
            cout << "NO";
            return;
        }
        if (s.count(x - 1) && s.count(x + 1))
        {
            cout << "NO";
            return;
        }
        if (s.count(x + 2) && s.count(x + 1))
        {
            cout << "NO";
            return;
        }
    }
    cout << "YES";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();
    return 0;
}
