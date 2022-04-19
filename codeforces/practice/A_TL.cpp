#include <bits/stdc++.h>
using namespace std;
int n, m;
const int N = 300 + 5;
int main()
{
    cin >> n >> m;

    int a[N], b[N];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < m; i++)
        cin >> b[i];

    sort(a, a + n);
    sort(b, b + n);

    int tmin = 2 * a[0];

    tmin = max(tmin, a[n - 1]);

    if (b[0] <= tmin)
    {
    puts("-1");
    }
    else
    {
        cout << tmin;
    }

    return 0;
}