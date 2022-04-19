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
        int n;
        ll k;
        cin >> n >> k;
        ll a[n];
        for(int i = 0;i<n;i++) cin >> a[i];
        ll ans = -INF;
        ll val;
        for (ll i = n - 1; i >= max(0, n - 200); i--)
        {
            for (ll j = i - 1; j >= max(0, n - 200); j--)
            {
                val = i * (i + 1) - k * (a[i] | a[i + 1]);
                ans = max(ans, (i + 1LL) * (j + 1LL) - k * (a[i] | a[j]));
            }
        }
        cout << ans << endl;
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
