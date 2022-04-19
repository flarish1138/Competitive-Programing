#include <bits/stdc++.h>
#define ll long long int
#define rep(i, a, b) for (i = a; i < b; ++i)
#define repr(i, a, b) for (i = a; i >= b; --i)
#define tst()  int ttt;   cin >> ttt;for (int test = 1; test <= ttt; ++test)

using namespace std;

//1.DP se soch
//2.DP se soch
//3.DP se soch
//graph, gcd, BS, seive
//if NOTA,then
//brute force hi optimal h

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);

    int n, m;
    cin >> n >> m;
    int i;
    int a[n], b[m];
    rep(i, 0, n - 1)
            cin >>
        a[i];
    rep(i, 0, m - 1)
            cin >>
        b[i];
    bool ok = true;
    if (a[0] != 0)
    {
        cout << "NO";
        return 0;
    }
    else
    {
        rep(i, 0, n)
        {
            // if (b[i] >= a[i + 1]){
            //     cout << "YES";
            //     return 0;
            // }

            // else
            // {
            //     cout << "NO";
            //     return 0;
            // }
            if (a[i] != m && b[i] != m)
            {
                if (b[i] >= a[i + 1])
                {
                    ok = false;
                    continue;
                }
                else
                {
                    ok = true;
                    break;
                }
            }
        }
    }
    if (ok ||( a[n - 1] == m || b[n - 1] == m))
    {
        cout << "YES\n";
    }
        else cout << "NO";

return 0;
}
