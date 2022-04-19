#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int a, b, c, d;
        cin >> a >> b >> c >> d;
        if (b >= a)
            cout << b << endl;

        else if (d>=c)
            cout << -1 << endl;

        else
            cout << b + (a - b + c - d - 1) / (c - d) * c << endl;
    }
    return 0;
}