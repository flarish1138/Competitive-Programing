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
    ll n, t, c;
    cin >> n >> t >> c;
    ll a[n], b[n];
    int i, j = 0, count = 0,count1=0;;
    rep(i, 0, n) cin >> a[i];
    bool ok = false;
    rep(i, 0, n)
    {
        if (a[i] <= t)
        {
            b[j] = i;
            j++;
            ok = true;
            count1++;
           
        }
    }
    int f = count1/c;
    int k = 0;
    while(abs(b[k]-b[k+1])==1 and c>0){
        count++;
        c--;
        k++;
    }
   
    // if(c%2==0)
    // cout<<count1<<endl;
    cout<<f<<endl;
    // cout<<count-f;
     cout<<count;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();
    return 0;
}
