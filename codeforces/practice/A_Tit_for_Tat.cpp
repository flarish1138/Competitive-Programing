#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[110];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        while (k > 0)
        {
            for (int i = 0; i < n; i++)
            {
                if (a[i] > k)
                {
                    a[i] = a[i] - k;
                    k--;
                    cout << a[i];
                }
                if (a[i] < 0)
                {
                    a[i] = a[i] + 1;
                    k--;
                    cout << a[i];
                }
            }
        cout << endl;
        }
        // sort(a, a + n);
        // while (k--)
        // {
        //     // for (int i = 0; i < n; i++)
        //     // {
        //     //     if (a[i] < 0)
        //     //     {
        //     //         a[i] = a[i] + 1;
        //     //         if (a[i] > 0)
        //     //         {
        //     //             continue;
        //     //         }
        //     //     }
        //     // }
        //     // for (int i = 0; i < n; i++)
        //     // {
        //     //     if (a[i] > 0)
        //     //     {
        //     //         a[i] = a[i] + 1;

        //     //     }
        //     // }

        //         while (k--)
        //         {
        //             for (int i = 0; i < n; i++)
        //             {
        //                 if (a[i] < 0)
        //                 {
        //                     a[i] = a[i] + 1;
        //                     if (a[i] > 0)
        //                     {
        //                         continue;
        //                     }
        //                 }
        //             }
        //         }
        // }

        // for (int i = 0; i < n; i++)
        // {
        //     cout << a[i] << " ";
        // }
    }

    return 0;
}