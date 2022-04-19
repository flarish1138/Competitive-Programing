#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    long long r, b, d;
    while (t--)
    {
        cin>>r>>b>>d;
        long long temp = min(r, b);
        temp = temp * (d + 1);
        if (temp >= max(r, b))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}