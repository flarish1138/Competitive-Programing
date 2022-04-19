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
    char a[n][m];
    rep(i, 0, n)
    {
        rep(j, 0, m)
        {
            cin >> a[i][j];
        }
    }
    rep(i, 0, n)
    {
        rep(j, 0, m)
        {
            bool should_out = true;
            rep(k, 0, n)
            {
                if (k != i)
                {
                    if(a[i][j]==a[k][j]) should_out=false;
                }
            }
            rep(k, 0, m)
            {
                if (k != j)
                {
                    if(a[i][j]==a[i][k]) should_out=false;
                }
            }
            if(should_out) cout<<a[i][j];
        }
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
