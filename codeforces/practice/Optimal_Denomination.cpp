#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    ll t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        ll a[n];
        ll mx = INT_MIN;
        ll mn = INT_MAX;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            // mx = max(mx,a[i]);
            // mn = min(mn,a[i]);
        }
        sort(a, a + n);
        // cout<<a[n-1]<<"\n";
        // cout<<a[0]<<"\n";
        ll sum = 0;
        // mn = 8 converted to say 2 will may be applicable to all the rest array or not.
        for (ll i = 0; i < n; i++)
        {
            if (a[i] >= a[n - 1])
            {
                sum += a[i] / a[n - 1];
                sum += a[i] % a[n - 1];
            }
            else if (a[i] < a[n - 1])
            {
                sum += a[i] / a[0];
                // sum += a[i] % a[0];
            }
        }
        cout << sum << "\n";
    }
    return 0;
}