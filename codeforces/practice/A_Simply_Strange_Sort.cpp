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
#define all(s) s.begin(), s.end()

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
        int n;
        cin >> n;
        int a[n];
        int i;
        int cnt = 1;
        rep(i, 0, n) cin >> a[i];
        while(!is_sorted(a,a+n)){
            if(cnt%2){
                rep(i,0,n-1){
                    if(((i+1)%2) and a[i]>a[i+1]){
                        swap(a[i],a[i+1]);
                    }
                }
            }
            else {
                rep(i,0,n-1){
                    if(!((i+1)%2) and a[i]>a[i+1]){
                        swap(a[i],a[i+1]);
                    }
                }
            }
            cnt++;
        }
        cout<<cnt-1<<nline;
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
