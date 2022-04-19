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
    int n,s,k;
    string st;
    cin>>st;
    n = st.size();
    s=1;
    rep(i,0,n)
    {
        k=st[i]-'0';
        if(k==0)
            s*=2;
        else if(k==1)
            s*=7;
        else if(k==2)
            s*=2;
        else if(k==3)
            s*=3;
        else if(k==4)
            s*=3;
        else if(k==5)
            s*=4;
        else if(k==6)
            s*=2;
        else if(k==7)
            s*=5;
        else if(k==8)
            s*=1;
        else if(k==9)
            s*=2;
    }
    cout<<s<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();
    return 0;
}
