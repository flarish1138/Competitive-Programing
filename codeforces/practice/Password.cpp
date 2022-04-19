#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int t;
    cin >> t;

    while (t--)
    {
        int a_letter = 0;
        int A_letter = 0;
        int D_digit = 0;
        int S_Special = 0;
        cin >> s;
        for (int i = 1; i < s.length() - 1; i++)
        {
            if ((s[i] >= 97) && (s[i] <= 122))
            {
                a_letter++;
            }
            else if ((s[i] >= 65) && (s[i] <= 90))
            {
                A_letter++;
            }
            else if ((s[i] >= 48) && (s[i] <= 57))
            {
                D_digit++;
            }
            else if ((s[i] == 64) || (s[i] == 63) || (s[i] == 35) || (s[i] == 37) || (s[i] == 38))
            {
                S_Special++;
            }
        }
        // cout << a_letter << " " << A_letter << " " << D_digit << " " << S_Special << " " << endl;
        if ((s[0] >= 97 && s[0] <= 122) || (s[s.length() - 1] >= 97 && s[s.length() - 1] <= 122))
            a_letter++;
        if (s.length() >= 10 && a_letter > 0 && A_letter > 0 && D_digit > 0 && S_Special > 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
