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
    int t, i;
    cin >> t;
    int a[t];
    rep(i, 0, t) cin >> a[i];
    if (t == 1)
    {
        cout << "YES";
        return;
    }
    rep(i, 1, t - 1)
    {
        if (a[i] == a[i - 1] and a[i] != a[i + 1])
        {
            cout << "YES";
            return;
        }
        else if(a[i]!=a[i+1] and a[i+1]!= a[i+2])
        {
            cout<<"YES";
            return;
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
