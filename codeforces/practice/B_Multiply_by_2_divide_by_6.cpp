#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    ll t, n, count = 0;
    cin >> t;
    while (t--)
    {
        cin >> n;
        if (n == 1)
            cout << 0 << "\n";
        else if (n == 2)
            cout << -1 << "\n";
        else
        {
            while (n > 1)
            {

                if (n % 6 == 0)
                {
                    n = n / 6;
                    count++;
                }
                else
                {
                    if (n == 2)
                    {
                        cout << -1 << "\n";
                        break;
                    }
                    n = n * 2;
                    count++;
                }
            }
            if (n == 1)
                cout << count << "\n";
        }
    }
    return 0;
}