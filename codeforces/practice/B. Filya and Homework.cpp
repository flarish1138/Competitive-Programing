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
    int n;
    cin >> n;
    set<int> st;
    rep(i, 0, n)
    {
        int x;
        cin >> x;
        st.insert(x);
    }
    int a, b, c;
    if (st.size() > 3)
    {
        cout << "NO";
        return;
    }
    else if (st.size() < 3)
    {
        cout << "YES";
        return;
    }
    else if (st.size() == 3)
    {
        auto it = st.begin();
        a = *it;
        it++;
        b = *it;
        it++;
        c = *it;
        it++;
        if (abs(a - b) == abs(b - c))
        {
            cout << "YES";
            return;
        }
        else
        {
            cout << "NO";
            return;
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
