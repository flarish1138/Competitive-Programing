#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define rep(i, a, b) for (int i = a; i < b; ++i)
#define repr(i, a, b) for (int i = a; i >= b; --i)
#define nline "\n"

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;

//1.DP se soch
//2.DP se soch
//3.DP se soch
//graph, gcd, BS, seive
//if NOTA,then
//brute force hi optimal h

void solve()
{
    char a[8][8];
    rep(i, 0, 8)
    {
        rep(j, 0, 8)
        {
            cin >> a[i][j];
        }
    }

    // row check
    int cnt;
    int cntBlack = 0;
    rep(i, 0, 8)
    {
        cnt = 0;
        rep(j, 0, 8)
        {
            if (a[i][j] == 'B')
            {
                cnt++;
                if (cnt == 8)
                {
                    cntBlack++;
                    break;
                }
            }
            else
                break;
        }
    }

    rep(i, 0, 8)
    {
        cnt = 0;
        rep(j, 0, 8)
        {
            if (a[j][i] == 'B')
            {
                cnt++;
                if (cnt == 8)
                {
                    cntBlack++;
                    break;
                }
            }
            else
                break;
        }
    }
    if(cntBlack==16)
    cout<<cntBlack/2;
    else cout<<cntBlack;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();
    return 0;
}
