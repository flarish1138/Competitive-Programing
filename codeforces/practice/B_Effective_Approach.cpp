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
const int N = int(1e5 + 3);

void solve()
{
    ll n, m, pos[N];
    ll i, j;
    cin >> n;
    rep(i, 0, n)
    {
        ll num;
        cin >> num;
        pos[num] = i + 1;
    }

    ll cnt = 0;
    ll cntrev = 0;
    cin >> m;
    for (j = 0; j < m; j++)
    {
        int q;
        cin >> q;
        cnt += pos[q];
        cntrev += n - pos[q] + 1;
    }

    // cnt += 1;
    // cntrev += 1;

    cout << cnt << " " << cntrev;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();
    return 0;
}
