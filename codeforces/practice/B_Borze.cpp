#include <bits/stdc++.h>
#include <string.h>
using namespace std;

int main()
{
    string s;
        cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '.')
        {
            cout << 0;
        }
        else if (s[i] == '-' && s[i + 1] == '.')
        {
            cout << 1;
            i++;
            continue;
        }
        else if (s[i] == '-' && s[i + 1] == '-')
        {
            cout << 2;
            i++;
        }
    }

    return 0;
}