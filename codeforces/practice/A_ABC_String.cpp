#include <bits/stdc++.h>
#include<string.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a;
        cin >> a;
        int n = a.length();
        string c;
        string b = "";

        for (int i = 0; i <= n; i++)
        {
            if (a[i] == 'A')
            {
                b = b + "(";
            }
            if (a[i] == 'B')
            {
                b = b + ")";
            }
            if (a[i] == 'C')
            {
                b = b + ")";
            }
        }

        for (int j = n - 1; j >= 0; j++)
        {
            c = b[j];
        }
        for (int i = 0; i < n; i++)
        {
            if (b == c)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}