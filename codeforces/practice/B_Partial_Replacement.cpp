#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int j = 1;
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '*')
            {
                if (s[n - j] == '*')
                {
                    if ((n - j) - i <= k)
                    {
                        count++;
                        // j++;
                    }
                }
                else{
                    j++;
                }
            }
        }
        cout<<count<<endl;
    }

    return 0;
}