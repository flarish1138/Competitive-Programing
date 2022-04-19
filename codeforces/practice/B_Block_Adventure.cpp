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
    int t;
    cin >> t;
    while (t--)
    {
        int  n,m,k;
        cin>>n>>m>>k;
        int a[n+1];
        rep(i,1,n+1) cin>>a[i];
        for(int i =1;i<n and m>=0;i++)
        m += a[i] - max(a[i+1]-k,0);
        if(m<0){
            cout<<"NO"<<nline;
            continue;
        }cout<<"YES"<<nline;
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
