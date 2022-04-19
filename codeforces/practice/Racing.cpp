#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int x, r, m;
        cin >> x >> r >> m;
        // int energy = -1;
        // for (int i = 1; i <= m; i++)
        // {
        //     if (x != 0)
        //     {
        //         x--;
        //     }
        //     else
        //     {
        //         if (x == 0)
        //         {
        //             x++;
        //         }
        //     }
        //     energy++;
        //     if (energy == r)
        //     {
        //         cout << "NO" << endl;
        //         break;
        //     }
        // }
        // if (energy!=r)
        // {
        //     cout << "YES" << endl;
        // }

        if (r % 2 != 0 && m % 2 != 0)
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