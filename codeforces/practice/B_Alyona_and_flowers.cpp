#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define rep(i, a, b) for (int i = a; i < b; ++i)
#define repr(i, a, b) for (int i = a; i >= b; --i)
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
    int n, m;
    cin >> n >> m;
    int a[110];
    rep(i, 1, n + 1) cin >> a[i];
    int sum = 0;
    int sum1 = 0;
    while (m--)
    {
        int l, r;
        cin >> l >> r;
        sum = 0;
        rep(i, l, r + 1) sum += a[i];
        if(sum>0)
        sum1 += sum;
    }
    // if (sum1 + sum - 1 < 0)
    //     cout << 0;
    // else
        cout << sum1  << " ";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();
    return 0;
}
