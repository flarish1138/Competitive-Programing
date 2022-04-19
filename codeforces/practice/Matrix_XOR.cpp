#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m, k;
        cin >> n >> m >> k;
        ll xorSum = 0;
        ll sum = 0;
        ll a[n][m];
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                a[i][j] = k + i + j;
                xorSum ^= a[i][j];
            }
        }
        cout << xorSum << endl;
    }
    return 0;
}