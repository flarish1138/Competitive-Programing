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
#define sz(s) (int)(s.size())
#define all(s) s.begin(), s.end()

//1.DP se soch
//2.DP se soch
//3.DP se soch
//graph, gcd, BS, seive
//if NOTA,then
//brute force hi optimal h

void solve()
{

    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int start = max(a, b) - (a + b + 1) / 2;
        int end = a + b - start;
        if ((a + b) % 2 == 0)
        {
            cout << (end - start + 2) / 2 << nline;
            for (int i = start; i <= end; i += 2)
                cout << i << ' ';
        }
        else
        {
            cout << (end - start + 1) << nline;
            for (int i = start; i <= end; i++)
                cout << i << ' ';
        }
        cout << nline;
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
