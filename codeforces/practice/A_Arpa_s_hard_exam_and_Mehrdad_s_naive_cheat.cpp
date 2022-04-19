#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll MOD = 1e9 + 7;

ll power(ll a, ll n, ll p)
{
    int res = 1;
    while (n)
    {
        if (n % 2)
            res = (res * a) % p, n--;
        else
            a = (a * a)%p, n /= 2;
    }
    return res;
}

int main()
{
    ll n;
    cin >> n;
    ll z = power(8, n, 10);
    cout << z;

    return 0;
}