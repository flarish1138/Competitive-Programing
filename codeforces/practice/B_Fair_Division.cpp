#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        int a[n];
        long long int sum1 = 0;
        long long int count1 = 0;
        long long int sum2 = 0;
        long long int count2 = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum1 += a[i];
        }
        if (sum1 % 2 == 0)
        {
            for (int i = 0; i < n; i++)
            {
                if (a[i] == 2)
                {
                    count2++;
                    sum2 += a[i];
                    if (sum2 == sum1 / 2)
                    {
                        cout << "YES" << endl;
                        break;
                    }
                }
            }
        }

        else
            cout << "NO" << endl;
    }
    return 0;
}