#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, x;
    long long int l, r;
    long long int t = 1;
    long long int moments = 0;
    cin >> n >> x;
    while (n--)
    {
        cin >> l >> r;
        t += x * ((l - t) / x);
        moments += r - t + 1;
        t = r + 1;
    }
    cout << (moments) << endl;

    return 0;
}
// #include <iostream>
// using namespace std;

// int main()
// {
//     int n, x, l, r, t(1), m(0);
//     cin >> n >> x;

//     for (int i = 0; i < n; i++)
//     {
//         cin >> l >> r;
//         t += x * ((l - t) / x);
//         m += r - t + 1;
//         t = r + 1;
//     }

//     cout << m << endl;
//     return 0;
// }