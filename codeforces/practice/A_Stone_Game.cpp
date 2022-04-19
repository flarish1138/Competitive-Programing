#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        int mn1 = INT_MAX;
        int mn2 = INT_MAX;
        int mn3 = INT_MAX;
        int mn4 = INT_MAX;
        int mn = INT_MAX;
        int mx = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mn = min(mn,a[i]);
            mx = max(mx,a[i]);

        }
        for (int i = 0; i < n; i++)
        {
            if(a[i]==mn)
            count++;
            else 

        }
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mn = min(mn,a[i]);
            mx = max(mx,a[i]);

        }
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mn = min(mn,a[i]);
            mx = max(mx,a[i]);

        }
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mn = min(mn,a[i]);
            mx = max(mx,a[i]);

        }

    }
    return 0;
}