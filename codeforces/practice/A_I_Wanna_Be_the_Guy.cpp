#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int p;
    cin >> p;
    int count = 0;
    int a[p];
    for (int i = 0; i < p; i++)
    {
        cin >> a[i];
    }
    int b[p];
    for (int i = 0; i < p; i++)
    {
        cin >> b[i];
    }
    int c[n] = {0};
    // int c[n+1]={0};
    sort(a, a + p);
    sort(b, b + p);
    for (int i = 0; i < p; i++)
    {
        c[a[i]]++;
    }

    for (int i = 0; i < n; i++)
    {
        if (c[b[i]] == 0)
        {
            c[b[i]]++;
        }
        else
        {
            if (c[a[i]] != 0)
            {
                continue;
            }
        }
    }
    for (int i = 0; i <= n; i++)
    {
        if (c[i] == 1)
        {
            count++;
        }
    }

    cout<<count<<endl;

    if (count == n)
    {
        cout << "I become the guy." << endl;
    }
    else
    {
        cout << "Oh, my keyboard!" << endl;
    }

    return 0;
}