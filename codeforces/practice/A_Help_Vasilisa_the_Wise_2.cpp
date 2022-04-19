#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int r1, r2, c1, c2, d1, d2;
    cin >> r1 >> r2 >> c1 >> c2 >> d1 >> d2;
    long long int a;
    long long int b;
    long long int c;
    long long int d;
    a = abs(r1 - c1);
    b = abs(c1 - c2);
    while ((a + b) > r1 || (a + b) < r1)
    {

        if ((a + b) < 1)
        {
            cout << -1 << endl;
            return 0;
        }
        if ((a + b) > r1)
        {
            if (a > b)
            {
                a--;
            }
            else
            {
                b--;
            }
            // if ((a < 1) || (b < 1) || (a>9) ||(b>9))
            // {
            //     cout << -1 << endl;
            //     return 0;
            // }
        }
        else if ((a + b) < r1)
        {
            a++;
            b++;
        }
    }
    c = (c1 - a);
    d = (c2 - b);

    if ((a < 1) || (b < 1) || (a > 9) || (b > 9)|| (c < 1) || (d < 1) || (c > 9) || (d > 9))
    {
        cout << -1 << endl;
        return 0;
    }


    cout << a << " " << b << endl;
    cout << c << " " << d;
    return 0;
}