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

const int N = 400;

//1.DP se soch
//2.DP se soch
//3.DP se soch
//graph, gcd, BS, seive
//if NOTA,then
//brute force hi optimal h

void solve()
{
    int n;
    cin >> n;
    int m[N], f[N];
    while (n--)
    {
        string s;
        int a, b;
        cin >> s >> a >> b;
        if (s[0] == 'M')
        {
            for (int i = a; i <= b; i++)
            {
                m[i]++;
            }
        }
        else
        {
            for (int i = a; i <= b; i++)
            {
                f[i]++;
            }
        }
    }
    int ans = 0;
    for (int j = 0; j <= N; j++)
    {
        ans = max(ans, 2 * min(m[j], f[j]));
    }
    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();
    return 0;
}
