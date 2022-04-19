#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int n;
    long long int mn = INT_MAX;
    int sum = 0;
    int diff = 0;
    int k = 0;
    long long int b[310] = {0};
    int count = 0;
    int a;
    while (t--)
    {
        cin >> n;
        bool f = false;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            if (a < 0)
                f = true;
        }
        if (f)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            cout << 101 << endl;
            for (int i = 0; i <= 100; i++)
                cout << i << " ";
            cout << endl;
        }
    }
    return 0;
}