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
    string s;
    cin >> s;
    string t, l, r;
    cin >> t;
    int p = s.find('|');
    l = s.substr(0, p);
    r = s.substr(p + 1);
    for (auto c : t)
    {
        if (l.size() <= r.size())
        {
            l += c;
        }
        else
        {
            r += c;
        }
    }
    if(l.size()==r.size())
    cout<<l<<"|"<<r;
    else cout<<"Impossible";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();
    return 0;
}
