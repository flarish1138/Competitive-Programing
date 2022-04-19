#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k;
    cin >> k;
    int a[12];
    int sum = 0;
    int count = 0;
    for (int i = 0; i < 12; i++)
    {
        cin >> a[i];
    }
    sort(a, a + 12);
    // for (int i = 0; i < 12; i++)
    // {
    //     cout <<a[i]<<" ";
    // }

    if (k == 0)
    {
        cout << 0 << endl;
        return 0;
    }
    else if (k > 0)
    {
        for (int i = 11; i >= 0; i--)
        {
            sum += a[i];
            count++;
            if (sum >= k)
            {
                cout << count << endl;
                return 0;
            }
        }
    }
    cout << -1 << endl;

    return 0;
}