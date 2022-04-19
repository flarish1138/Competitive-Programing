
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
#define sz(s) (int)(s.size())
#define all(s) s.begin(),s.end()
 
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
    int t;
    cin >> t;
    while (t--)
    {
        ll l,r;
        cin>>l>>r;

        ll x = floor(r/2)+1;
        if(l<=x) cout<<r%x<<endl;
        else cout<<r%l<<endl;
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
