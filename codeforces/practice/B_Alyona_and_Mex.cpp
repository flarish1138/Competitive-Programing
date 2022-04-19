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
    ll n;
    cin >> n;
    ll a[n];

    for (ll i = 1; i <= n; i++)
        cin >> a[i];

    sort(a + 1, a + n + 1);
    // for (int i = 1; i <= n; i++)
    //     cout << a[i] << " ";
    // cout << endl;

    
    // // if (n == 1)
    // // {
    // //     cout << 2;
    // // }
    // // else
    // // {
    // for (ll i = 1; i <= n; i++)
    // {
    //     if (a[i] <= i || (a[i] == i and (a[i - 1] == i - 1 || i == 1)))
    //         continue;
    //     else if (a[i] == i and a[i - 1] < i-1)
    //         a[i] = a[i] - a[i-1];
    //     else if (a[i] > i && ((a[i - 1] == i - 1 || i == 1)))
    //         a[i] = i;
    //     else
    //         a[i] = a[i - 1] + 1;
    // }
    // for (int i = 1; i <= n; i++)
    //     cout << a[i] << " ";
    // cout << endl;
    // cout << a[n] + 1;
    // if (a[n] - n == 0 or abs(a[n] - n) == 1)
    // else
    //     cout << a[n] + abs(a[n] - n);

    ll curr = 1;
     for (int i = 1; i <= n; i++)
     {
         if(a[i]>=curr) curr++;
     }
     cout<<curr;
    
}
// }

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();
    return 0;
}
