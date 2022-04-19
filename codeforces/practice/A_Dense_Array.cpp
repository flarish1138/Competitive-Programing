#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main()
{
    int i;
    long long int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long long int a[n];
        long long int ans = 0;

        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (i = 0; i < n-1; i++)
        {
            long double maximum = max(a[i], a[i + 1]);
            long double minimum = min(a[i], a[i + 1]);

            long double division = ceil(maximum / minimum);

            if (division > 2)
            {
                while (minimum * 2 < maximum)
                {
                    ans++;
                    minimum *= 2;
                }
            }
        }
        cout << ans << endl;
    }
        return 0;
}
