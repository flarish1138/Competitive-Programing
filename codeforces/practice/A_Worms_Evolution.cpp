#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int x = 0, y = 0, z = 0;
    int sum = 0;
    int a[110];
    int mx = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mx = max(mx, a[i]);
        x = i;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            sum = a[i] + a[j];
            if (mx == sum)
            {
                y = i;
                z = i ;
                cout << x << " " << y << " " << z << endl;
                return 0;
            }
        }
    }
    cout << -1 << endl;
    return 0;
}