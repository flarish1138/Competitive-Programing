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
    int n, i;
    cin >> n;
    string a;
    cin >> a;
    int count = 0;
    char arr[n - 1];
    rep(i, 0, a.size())
    {
        int j = 0;
        if (toupper(a[i]) == a[i + 1])
        {
            i++;
        }
        else
        {
            count++;
            i++;
        }
    }
    rep(i, 0, 2*n-2)
    {
        if (toupper(a[i]) == a[i + 3])
        {
            count--;
        }
    }
    cout << count << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();
    return 0;
}
