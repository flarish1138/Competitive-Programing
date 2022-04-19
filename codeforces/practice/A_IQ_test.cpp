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
    char a[4][4];
    rep(i, 0, 4)
    {
        rep(j, 0, 4)
        {
            cin >> a[i][j];
        }
    }
    int cnt;
    for (int i = 0; i < 3; i++)
    {
        cnt = 0;
        for (int j = 0; j < 3; j++)
        {
            if (a[i][j] == '#')
                cnt++;
            if (a[i][j + 1] == '#')
                cnt++;
            if (a[i + 1][j] == '#')
                cnt++;
            if (a[i + 1][j + 1] == '#')
                cnt++;
            if (cnt != 2)
            {
                cout << "YES" << nline;
                // cout << cnt;
                return;
            }
            cnt = 0;
        }
    }
    cout << "NO";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();
    return 0;
}
