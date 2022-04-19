#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int x, y;
        cin >> x >> y;
        string s;
        while (n--)
        {
            cin >> s;

            int F = 0;
            int P = 0;

            for (int j = 0; j < m; j++)
            {
                if (s[j] == 'F')
                {
                    F++;
                }
                else if (s[j] == 'P')
                {
                    P++;
                }
            }

            if ((F >= x) || (F == (x - 1) && P >= y))cout << 1;else cout << 0;
        }
    cout << endl;
    }
    return 0;
}
