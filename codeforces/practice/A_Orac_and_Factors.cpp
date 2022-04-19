#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    ll t;
    cin >> t;
    ll v;
    while (t--)
    {
        ll n, k;
        ll a;
        cin >> n >> k;
        if (n % 2 == 0)
        {
            n = n + 2 * k;
            cout << n << "\n";
        }
        else
        {
            for (int i = 3; i < 1e7; i++)
            {
                if (n % i == 0)
                {
                    a = i;
                    break;
                }
            }
            n = n + 2*(k-1) + a;
            cout<<n<<"\n";
        }
    }
    return 0;
}
