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

char a[101][101];
void solve()
{
    int cnt = 0;
    int n, m;
    cin >> n >> m;
    char s;
    cin >> s;
    rep(i, 0, n)
    {
        rep(j, 0, m)
        {
            cin >> a[i][j];
        }
    }
    set<char> v;
    rep(i, 0, n)
    {
        rep(j, 0, m)
        {

            if (a[i][j] == s)
            {
                if (a[i][j + 1] != '.' and a[i][j + 1] != s and j + 1 < m)
                {
                    v.insert(a[i][j + 1]);
                }
                if (a[i][j - 1] != '.' and a[i][j - 1] != s and j - 1 >= 0)
                {
                    v.insert(a[i][j - 1]);
                }
                if (a[i + 1][j] != '.' and a[i + 1][j] != s and i + 1 < n)
                {
                    v.insert(a[i + 1][j]);
                }
                if (a[i - 1][j] != '.' and a[i - 1][j] != s and i - 1 >= 0)
                {
                    v.insert(a[i - 1][j]);
                }
            }
        }
    }
    cout << v.size();
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();
    return 0;
}
