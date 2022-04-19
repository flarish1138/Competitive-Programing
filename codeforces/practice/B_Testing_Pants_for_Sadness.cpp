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
    ll n;
    cin >> n;
    ll a[n];
    ll c = 0;
    rep(i, 1, n + 1)
    {
        cin >> a[i];
    }
    // if (n == 1)
    // {
    //     cout << a[1];
    //     return;
    // }
    rep(i, 1, n + 1)
    {
        // if (a[i] == 1)
        // {
        //     c += 1;
        // }

        c += (a[i] - 1) * (i);
        // }
    }
   
        cout << c+n << nline;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();
    return 0;
}
