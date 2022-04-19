#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int f, t;
    int mx = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cin >> f >> t;
        if (t > k)
        {
            int joy = f - (t - k);
            mx = max(mx, joy);
        }
        else
        {
            mx = max(mx, f);
        }
    }

    cout << mx << endl;

    return 0;
}