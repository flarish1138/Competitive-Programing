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
    int i;
    while (t--)
    {
        ll n;
        cin >> n;
        ll a[101], b[101];
        rep(i, 0, n)
        {
            cin >> a[i];
            cin >> b[i];
        }

        sort(a, a + n, greater<int>());
        sort(b, b + n, greater<int>());
        int k = n - floor(n / 4);
        ll sumA = 0;
        ll sumB = 0;
        ll sumC = 0;
        ll count = 0;

        // rep(i, 0, n)
        //     sumC += b[i];

        rep(i, 0, n)
        {
            sumA += a[i];
            sumB += b[i];
        }
        // cout<<sumA<<" "<<sumB<<endl;
        if (sumA >= sumB)
        {
            cout << "0\n";
            continue;
        }
        else if (sumA < sumB)
        {
            while (sumB > sumA)
            {
                sumA = sumA - a[n-1];
                sumA = sumA - 100;
                count++;
            }
            cout << count << endl;
        }
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
