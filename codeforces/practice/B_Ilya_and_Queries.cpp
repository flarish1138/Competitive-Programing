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
    int  i;
    string s;
    cin >> s;
    int n = s.length();
    int a[n + 2] = {}, sum[n + 2] = {};
    rep(i, 1, n)
    {
        a[i] = (s[i - 1] == s[i]);
        sum[i] = (sum[i - 1] + a[i]);
    }
    int m;
    cin >> m;
    while (m--)
    {
        int l, r;
        cin >> l >> r;
        cout<<sum[r-1] - sum[l-1]<<endl;
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
