#include <bits/stdc++.h>
#define ll long long int
#define rep(i, a, b) for (i = a; i < b; ++i)
#define repr(i, a, b) for (i = a; i >= b; --i)
#define tst()   \
    int ttt;    \
    cin >> ttt; \
    for (int test = 1; test <= ttt; ++test)

using namespace std;

//1.DP se soch
//2.DP se soch
//3.DP se soch
//graph, gcd, BS, seive
//if NOTA,then
//brute force hi optimal h
const int N = 1e6 + 10;
ll x[N], y[N];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);

    ll n, m;
    cin >> n >> m;
    ll i, j;

    rep(i, 1, n + 1) x[i % 5]++;
    rep(j, 1, m + 1) y[j % 5]++;
    cout << x[1] * y[4] + x[2] * y[3] + x[3] * y[2] + x[4] * y[1] + x[0] * y[0];
    return 0;
}