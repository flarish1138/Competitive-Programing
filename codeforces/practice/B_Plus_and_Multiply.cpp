#include <bits/stdc++.h>
#define ll long long int
#define rep(i, a, b) for (i = a; i < b; ++i)
#define repr(i, a, b) for (i = a; i >= b; --i)
#define tst()   \
    int ttt;    \
    cin >> ttt; \
    for (int test = 1; test <= ttt; ++test)

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);

    tst()
    {
        ll n, a, b;
        cin >> n >> a >> b;
        ll s = 1;
        int flag = 0;
        if (a == 1)
        {
            if ((n - 1) % b == 0)
            {
                cout << "Yes\n";
            }
            else
            {
                cout << "No\n";
            }
            continue;
        }
        while (s <= n)
        {
            if ((s - n) % b == 0)
            {
                flag = 1;
                break;
            }
            s = s * a;
        }
        if (flag)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    return 0;
}