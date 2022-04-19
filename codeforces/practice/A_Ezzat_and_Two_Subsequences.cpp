#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define rep(i, a, b) for (ll i = a; i < b; ++i)
#define repr(i, a, b) for (ll i = a; i >= b; --i)
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
    // 1st way

    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll a[n];
        rep(i, 0, n) cin >> a[i];

        sort(a, a + n);
        double sum = 0.0;
        double val = -1e30;
        // double sum = 0;
        rep(i, 0, n - 1) sum += (double)a[i];
        sum /= n - 1;
        val = a[n - 1] + sum;
        cout << fixed << setprecision(17) << val << nline;
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
