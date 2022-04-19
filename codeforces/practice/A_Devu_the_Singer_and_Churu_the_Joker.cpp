#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, d;
    cin >> n >> d;
    int t[n];

    for (int i = 0; i < n; i++)
    {
        cin >> t[i];
    }
    int b = d - 5;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (b > 0)
        {
            b = b - t[i];
        }
        b = b - 10;
        count++;
    }
    // cout << count << endl;
    if (b < 0)
    {
        cout << "-1" << endl;
    }
    else
    {
        // cout << count << endl;
    }

    return 0;
}