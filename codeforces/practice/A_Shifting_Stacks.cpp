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
        ll h[n];
        ll sum1 = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> h[i];
            sum1 += h[i];
        }
        ll sum = n * (n - 1) / 2;
        if (sum1 % sum == 0)
            cout << "YES"
                 << "\n";
        // else if(sum==0)
        //     cout << "NO"
        //          << "\n";
        else 
            cout << "NO"
                 << "\n";
    }
    return 0;
}