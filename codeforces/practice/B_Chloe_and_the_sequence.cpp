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
    ll n, k;
    cin >> n >> k;

    ll sz = 1;
    rep(i, 0, n - 1) sz = sz * 2 + 1;
    ll low = 1;
    ll high = sz;
    ll curr = n;

    while (low <= high)
    {
        ll mid = low + (high - low) / 2;
        if (mid > k)
        {
            high = mid - 1;
            curr--;
        }
        else if (mid < k)
        {
            low = mid + 1;
            curr--;
        }
        else
        {
            cout << curr;
            break;
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
