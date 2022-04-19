#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int n, x, k;
        cin >> n >> x >> k;
        bool flag = false;
        long long int z = n + 1;
        if (x % 2 == 1)
        {
            for (int i = 0; i <= n + 1; i = i + 3)
            {
                if (x == i * k)
                {
                    // cout << "YES" << endl;
                    flag = true;
                    break;
                }
                if (x == (z - (i * k)))
                {
                    // cout << "YES" << endl;
                    flag = true;
                    break;
                }
            }
        }
        else if (x % 2 == 0)
        {
            for (int i = n + 1; i >= 0; i = i - 2)
            {

                if (x == (z - (i * k)))
                {
                    // cout << "YES" << endl;
                    flag = true;
                    break;
                }
                if (x == i * k)
                {
                    // cout << "YES" << endl;
                    flag = true;
                    break;
                }
            }
        }
        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;

        // long long int d = x / k;
        // long long int d1 = (z - x) / k;
        // if ((d * k) == x || (n + 1) - (d * k) == x)
        // {
        //     cout << "YES"<<endl;
        // }
        // else cout<<"NO"<<endl;
    }
    return 0;
}