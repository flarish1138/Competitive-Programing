#include <bits/stdc++.h>
#include <climits>
using namespace std;

int main()
{
    int mx = INT_MIN;
    int mn = INT_MAX;
    int n;
    cin >> n;
    int a[n];
    int x, y;
    int count1 = 0;
    int count2 = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        mx = max(mx, a[i]);
        mn = min(mn, a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] == mx)
        {
            x = i + 1;
            break;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] == mn)
        {
            y = i + 1;
            break;
        }
    }
    if((x-y)==1){
        cout<<1<<endl;
    }
    else if (y > x)
    {
        y = n - y;
        x = x - 1;
        cout << x + y << endl;
    }
    else if (y < x)
    {
        y = (n - y) - 1;
        x = (x - 1) - 1;
        cout << (x + y) << endl;
    }

    return 0;
}