#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            a[i] = i + 1;
        }

        // int high = 0, low = n - 1;
        // while (low < high)
        // {
        //     swap(a[high], a[low]);
        //     low++;
        //     high--;
        // }
        if (n % 2 == 0)
        {
            for (int i = 0; i < n; i++)
            {
                swap(a[i], a[i + 1]);
                i++;
            }
        }
        else if (n % 2 != 0)
        {
            for (int i = 0; i < n-1; i++)
            {
                swap(a[i], a[i + 1]);
                i++;
            }
            swap(a[n-1],a[n-2]);
        }

        for (int i = 0; i < n; i++)
        // for (int i = n; i >= 1; i--)
        {
            cout << a[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}