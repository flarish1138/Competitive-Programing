#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    long long int x, n, m;
    long long int M;
    long long int N = 0;
    while (t--)
    {
        cin >> x >> n >> m;
        M = m * 10;
        x = x - M;
        // for (int i = 1; i <= n; i++)
        // {
            N = (x / 2) + 10;
            x = x - N;
            cout<<x<<endl;
        // }
        // if (x <= 0)
        //     cout << "YES" << endl;
        // else
        //     cout << "NO" << endl;
    }
    return 0;
}