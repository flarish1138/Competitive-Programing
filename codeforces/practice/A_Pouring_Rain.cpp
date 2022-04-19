#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define rep(i, a, b) for (i = a; i < b; ++i)
#define repr(i, a, b) for (i = a; i >= b; --i)
#define nline "\n"
#define PI              3.14159265358979323846

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
    lld d,h,v,e,res,k,r;
    cin >> d>>h>>v>>e;
     r = d/2.0;
     k = v/(PI*r*r);
     if(k<=e)
     {
     cout<<"NO\n";
     return ;
     }
     res = h/(k-e);
     cout<<"YES\n";
     cout<<fixed<<setprecision(12)<<res<<nline;   
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();
    return 0;
}
