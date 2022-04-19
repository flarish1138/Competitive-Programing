#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main()
{
    long long int a, n, k, b;
    cin >> n >> k;
    if (n % 2 != 0)
    {
        if (k <= (ceil(n >> 1) + 1))
        {
            // cout<<ceil(n>>1)+1<<endl;
            cout << k + (k - 1) << endl;
        }
        else
        {
            a = k - (ceil(n >> 1) + 1);
            cout << (a << 1) << endl;
        }
    }
    else if (n % 2 == 0)
    {
        if (k <= (ceil(n >> 1)))
        {
            // cout<<ceil(n>>1)+1<<endl;
            cout << k + (k - 1) << endl;
        }
        else
        {
            a = k - ceil(n >> 1);
            cout << (a << 1) << endl;
        }
    }
    // else
    // {

    //     // b = k%10;
    //     // cout<<(b<<1)<<endl;
    // }
    return 0;
}