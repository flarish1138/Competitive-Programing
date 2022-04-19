#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, t;
    cin >> n;
    cin >> t;
    string s;
    cin >> s;
    char temp;
    while (t--)
    {
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'B' && s[i + 1] == 'G')
            {
                temp = s[i + 1];
                s[i + 1] = s[i];
                s[i] = temp;
                i++;
            }
        }
    }
        cout<<s<<endl;
    return 0;
}