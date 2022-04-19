#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int a[n];
    int i, j;
        int sum =0;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    while (m--)
    {
        cin >> i >> j;
        sum = max(a[i],a[j]) + min(a[i],a[j]);
        if (sum == 0)
        {
            cout << 1 << endl;
        }
        else if (sum != 0)
            cout << 0 << endl;
    }

    return 0;
}