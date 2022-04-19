#include <bits/stdc++.h>
#define ll long long int
#define rep(i, a, b) for (i = a; i < b; ++i)
#define repr(i, a, b) for (i = a; i >= b; --i)
#define tst()  int ttt;   cin >> ttt;for (int test = 1; test <= ttt; ++test)

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);

    tst()
    {
        ll n;
        cin >> n;
        ll a[n + 1];
        int i;
        ll ans = 0;
        rep(i, 1, n + 1)
        cin >>  a[i];
        for(int i = 1;i<=n;i++)
        {
            for(int j = a[i]-i;j<=n;j += a[i]){
                if(j>=0){
                    if(a[i]*a[j] == i+j && j>i)
                    ans++;
                }
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}