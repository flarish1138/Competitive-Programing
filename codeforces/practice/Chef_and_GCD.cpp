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
    int t;
    cin >> t;
    while (t--)
    {
        ll x, y;
        cin >> x >> y;
        if (__gcd(x, y) > 1)
            cout << 0 << endl;
        else if (__gcd(x + 1, y) > 1 || __gcd(x, y + 1)>1)
            cout << 1 << endl;
        else
            cout << 2 << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();
    return 0;
}
