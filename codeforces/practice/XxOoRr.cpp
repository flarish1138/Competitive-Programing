#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    ll t, n, k;
    cin >> t;
    ll count = 1;
    ll count1 = 0;
    while (t--)
    {
        cin >> n >> k;
        ll a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        if (n % 2 == 1)
        {

            for (int i = 1; i < n; i++)
            {
                if (a[i] == 0)
                    i++;
                else if (a[i] != 0)
                {
                    if (a[i + 1] == 0)
                        count = count + 1;
                    else
                        count += k;
                }
                cout << count << "\n";
            }
        }
        else if (n % 2 == 0)
        {
            for (int i = 1; i < n; i++)
            {
                if (a[i] == 0)
                    i++;
                else if (a[i] != 0)
                {
                    if (a[i + 1] == 0)
                        count1 = count1 + 1;
                    else
                        count1 += 2;
                }
            }
            cout << count1 << "\n";
        }
    }
    return 0;
}
