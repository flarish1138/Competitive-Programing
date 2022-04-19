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

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

void solve()
{
    int n, m;
    cin >> n >> m;
    int i, j;
    int a[n];
    int ar[n];
    int k = 0;
    int count =0;
    rep(i, 0, n) cin >> a[i];
    rep(j, 0, n)
    {
        rep(i, 1, m + 1)
        {
            if (gcd(a[j], i) == 1)
            {
                count++;
                ar[k] = i;
                k++;
                break;
            }
        }
    }
    cout<<count<<endl;
    rep(i,0,count) cout<<ar[i]<<endl;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();
    return 0;
}
