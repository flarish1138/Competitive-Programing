#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int n, a, b;
    char s[2000];
    while (t--)
    {
        int j = 97;
        cin >> n >> a >> b;
        for (int i = 1; i <= n; i++)
        {
            if (j <= 97+(b-1))
            {
                s[i] = j;
                j++;
            }
            else
            {
                j = 97;
                s[i] = j;
                j++;
                // continue;
            }
            cout << s[i];
        }
        cout << endl;

        // for(int i =1;i<=b;i++)
        // {

        // }
    }
    return 0;
}