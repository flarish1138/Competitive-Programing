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
    string s, q;
    cin >> s;
    int n;
    cin >> n;
    while (n--)
    {
        string p;
        cin >> p;
        if (p.size() >= s.size() and equal(begin(s), end(s), begin(p)))
        {
            if (q.empty()) q = p;
            else q = min(p, q);
        }
    }
    if(q.empty()) q=s;
    cout<<q;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();
    return 0;
}
