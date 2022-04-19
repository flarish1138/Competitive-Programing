#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, m;
    cin >> n >> m;
    long long int z;
    if (n < m)
        cout << -1 << "\n";
    else
    {
        z = n / 2;
        z += n % 2;
        // cout<<z;
        while (z % m != 0)
        {
            z = z + 1;
        }
        cout << z << "\n";
    }

    return 0;
}