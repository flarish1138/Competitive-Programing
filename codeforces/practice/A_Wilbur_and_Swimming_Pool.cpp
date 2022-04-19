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
    int t;
    cin >> t;
    int x[t],y[t];
    for(int i = 0;i<t;i++)
    {
        cin>>x[i]>>y[i];
    }
    if(t==1 || t==3)
    {
    cout<<-1;
    return;
    }
    else if(t==2)
    {
        if((abs(x[0]-x[1])*abs(y[0]-y[1])<=0))
        cout<<-1;
        else cout<<abs(x[0]-x[1])*abs(y[0]-y[1]);
    }
    else if(t==4)
    {
        if((abs(x[1]-x[2])*abs(y[1]-y[2])<=0))
        cout<<-1;
        else cout<<abs(x[1]-x[2])*abs(y[1]-y[2]);
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
