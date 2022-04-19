#include <bits/stdc++.h>
using namespace std;
#define FAST ios::sync_with_stdio(false), cin.tie(0), cout.tie(0)
int main()
{
    FAST;
    int n;
    int t;
    cin >> t;
    while (t--)
    {
        bool flag = false;
        int x, y;
        cin >> x >> y;
        string a;
        int b[4];
        cin >> a;
        memset(b, 0, sizeof(b));
        for (int i = 0; i < a.size(); i++)
        {
            if (a[i] == 'R')
                b[0]++;
            if (a[i] == 'L')
                b[1]++;
            if (a[i] == 'U')
                b[2]++;
            if (a[i] == 'D')
                b[3]++;
        }
        if (x > 0 && y > 0)
        {
            if (b[0] >= x && b[2] >= y)
            {
                flag = true;
            }
        }
        if (x > 0 && y < 0)
        {
            y = (-1) * y;
            if (b[0] >= x && b[3] >= y)
            {
                flag = true;
            }
        }
        if (x < 0 && y > 0)
        {
            x = (-1) * x;
            if (b[1] >= x && b[2] >= y)
            {
                flag = true;
            }
        }
        if (x < 0 && y < 0)
        {
            x = (-1) * x;
            y = (-1) * y;
            if (b[1] >= x && b[3] >= y)
            {
                flag = true;
            }
        }
        if (x == 0 && y > 0)
        {
            if (b[2] >= y)
            {
                flag = true;
            }
        }
        if (x == 0 && y < 0)
        {
            y = (-1) * y;
            if (b[3] >= y)
            {
                flag = true;
            }
        }
        if (x > 0 && y == 0)
        {
            if (b[0] >= x)
            {
                flag = true;
            }
        }
        if (x < 0 && y == 0)
        {
            x = (-1) * x;
            if (b[1] >= x)
            {
                flag = true;
            }
        }
        if (flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        flag = false;
    }
}
