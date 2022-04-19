#include <bits/stdc++.h>
using namespace std;


string str;
int n;

bool isS()
{
    if(str[0] != 'a')
        return 0;
    for(int i = 0; i < n - 1; i++)
    {
        if(str[i] != str[i + 1])
            return 0;
    }
    return 1;
}

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        cin >> str;
        n = str.length();
        if(isS())
        {
            cout << "NO" << endl;
            continue;
        }
        cout << "YES" << endl;
        bool flag = 0;
        for(int i = 0; i < n; i++)
        {
            if(str[n - i - 1] != 'a' && !flag)
            {
                cout << 'a' << str[i];
                flag = 1;
            }
            else
                cout << str[i];
        }
        cout << endl;
    }
    return 0;
}