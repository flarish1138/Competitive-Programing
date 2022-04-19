#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define rep(i, a, b) for (i = a; i < b; ++i)
#define repr(i, a, b) for (i = a; i >= b; --i)
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
    int i, j;
    int a[3][3];
    rep(i, 0, 3)
    {
        rep(j, 0, 3)
        {
            cin >> a[i][j];
        }
    }

    a[0][0] = (a[1][0]+a[1][2]+a[2][0]+a[2][1]-(a[0][1]+a[0][2]))/2;
    a[1][1] = (a[2][0]+a[2][1]+a[0][1]+a[0][2]-(a[1][0]+a[1][2]))/2;
    a[2][2] = (a[1][0]+a[1][2]+a[0][1]+a[0][2]-(a[2][0]+a[2][1]))/2;

    rep(i,0,3){
        rep(j,0,3){
            cout<<a[i][j]<<" ";
        }
        cout<<nline;
    }
    

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();
    return 0;
}
