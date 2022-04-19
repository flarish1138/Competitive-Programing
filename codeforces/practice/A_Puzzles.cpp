#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    ll n, m, b, min;
    cin >> n >> m;
    ll a[m];
    for (int i = 0; i < m; i++)
        cin >> a[i];
    sort(a, a + m);
    min = a[n - 1] - a[0];
    for (int i = 0; i <= (m - n); i++)
    {
        b = a[i + (n - 1)] - a[i];
        if (b <= min)
            min = b;
    }
    cout << min;
    return 0;
}