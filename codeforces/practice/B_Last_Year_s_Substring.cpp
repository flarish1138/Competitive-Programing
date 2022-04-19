#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int n;
    while (t--)
    {
        cin >> n;
        string s[n];
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
        }
        for (int i = 0; i < n; i++)
        {
            cout << s[i] << endl;
        }
        // for (int i = 0; i < n; i++)
        // {
        //     if (s[i] == "2" && s[i + 1] == "0")
        //     {
        //         count = count + 1;
        //     }
        // cout << count << endl;
        // }
    }

    return 0;
}