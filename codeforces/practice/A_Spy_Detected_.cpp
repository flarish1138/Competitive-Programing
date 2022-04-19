#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int a[110];
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int c;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == a[i + 1])
            {
                c = i+1;
            }
            else
            {
                if (a[i] != a[i + 1])
                {
                    if (a[i + 1] == a[i + 2])
                    {
                        c = i+1;
                        break;
                    }
                    else
                    {
                        c = (i + 1)+1;
                        break;
                    }
                }
            }
        }
        cout<<c<<endl;
    }
    return 0;
}








