#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    char z[n] ={};
    char s[n];
    cin >> s;
    int count;
    int mx = INT_MIN;
    char x[n] ={};
    for (int i = 0; i < n - 1; i++)
    {
        z[0] = s[i];
        z[1] = s[i + 1];
        // cout<<z[0]<<z[1];

        count = 0;
        for (int j = 0; j < n - 1; j++)
        {
            if (s[j] == z[0] && s[j + 1] == z[1])
            {
                count++;
            }
        }
        mx = max(mx, count);
        if (mx == count)
        {
            x[0] = z[0];
            x[1] = z[1];
            // cout<<x[0]<<x[1];
        }
    }
    for(int i =0;i<2;i++)
    cout<<x[i];

    return 0;
}