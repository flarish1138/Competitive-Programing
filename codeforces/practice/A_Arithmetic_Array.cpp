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
        long long int a[n];
        long long int sum = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum = sum + a[i];
        }
        // cout << sum << "\n";
        if (sum == n)
            cout << 0 << "\n";
        else if (sum < n)
            cout << 1 << "\n";
        else if (sum > n)
            cout << sum - n << "\n";
    }
    return 0;
}