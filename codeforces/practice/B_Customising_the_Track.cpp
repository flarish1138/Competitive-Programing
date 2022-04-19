#include<bits/stdc++.h>
#define ll long long int
#define rep(i,a,b) for(i=a;i<b;++i)
#define repr(i,a,b) for(i=a;i>=b;--i)
#define tst() int ttt;cin>>ttt;for(int test=1;test<=ttt;++test)

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

    tst()
    {   int i;
        ll n;
        cin>>n;
        // ll n;
        ll a[n];
        ll sum = 0;
        rep(i,0,n)
        cin>>a[i];

        rep(i,0,n)
        sum += a[i];

        ll k = sum%n;
        ll ans = k * (n-k);

        cout<<ans<<"\n";
        
    }
    return 0;
}