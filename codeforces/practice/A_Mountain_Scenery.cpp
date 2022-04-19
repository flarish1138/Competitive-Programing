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
    int n, k;
    cin >> n >> k;
    int a[(2 * n) + 1];
    for (int i = 1; i <= (2 * n) + 1; i++)
    {
        cin >> a[i];
    }
    int i = 1;
    while (k > 0 and i <= (2 * n) + 1)
    {
        if (i % 2 == 0 and a[i] - 1 > a[i - 1] and a[i] - 1 > a[i + 1])
        {
            a[i] -= 1;
            k--;
        }
        i++;
    }
    for (int i = 1; i <= (2 * n) + 1; i++)
    {
        cout << a[i] << " ";
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
