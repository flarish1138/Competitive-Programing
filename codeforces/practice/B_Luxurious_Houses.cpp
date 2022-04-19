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

// int Binary_Search(ll arr[], ll n, ll x)
// {
//     ll low = 0, high = n - 1;
//     if (low <= high)
//     {
//         ll mid = (low + high) / 2;
//         if (arr[mid] == x)
//             return mid;
//         else if (arr[mid] > x)
//             high = mid - 1;
//         else
//             low = mid + 1;
//     }
//     return -1;
// }

void solve()
{
    int n;
    cin >> n;
    int a[n];
    int i, j;
    rep(i, 0, n)
    cin >> a[i];

    int mx = 0;
   repr(i, n-1, 0)
    {
        int temp = a[i];
        if (mx >= a[i]) a[i] = mx - a[i] + 1;
        else a[i] = 0;
        mx = max(temp, mx);
    }

    rep(i,0,n)
    cout<<a[i]<<" ";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();
    return 0;
}
