#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin >> t;
    long long int x, y, z, f1, f2;
    while (t--)
    {
        long long int c;
        long long int mx;
        long long int d = 0;
        long long int v = 0;
        long long int value;
        cin >> x >> y >> z >> f1 >> f2;
        v = (x + y + z);
        // cout << v << endl;
        mx = max(max(x, y), z);
        d = v - mx;

        mx = mx / f1;
        c = d * f2;
        value = mx + c;
        if (value < v)
        {
            cout << value << endl;
        }
        else
        {
            cout << v << endl;
        }
    }
    return 0;
}