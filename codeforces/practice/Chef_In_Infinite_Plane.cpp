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

#define N 100010
ll a[N];

void solve()
{
    int t, i;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int mx = INT_MIN;
        rep(i, 0, n)
        {
            int x;
            cin >> x;
            a[x]++;
            mx = max(mx, x);
        }

        int count = 0;
        rep(i, 2, mx + 1)
        {
            if (a[i] == 1)
            {
                count++;

                // continue;
            }
            else if (a[i] > 1 and a[i] <= i - 1)
            {
                count = count + a[i];

                // continue;
            }
            else if (a[i] >= i)
            {
                count = count + i - 1;
                // continue;
            }
        }
        cout << count << endl;
        // count = 0;
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
