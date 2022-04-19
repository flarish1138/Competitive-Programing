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

int left(string s, string t, int i, int x)
{
    while (x < t.length() && i >= 0)
    {
        if (t[x] == s[i])
        {
            x++;
            i--;
        }
        else
        {
            break;
        }
    }
    if (t.length() == x)
    {
        return 1;
    }
    return 0;
}

int right(string s, string t, int i, int x)
{
    if (x == t.length())
    {
        return 1;
    }
    if (x + 1 == t.length())
    {
        if (i + 1 < s.length() && s[i + 1] == t[x])
        {
            return 1;
        }
        else if (i - 1 >= 0 && s[i - 1] == t[x])
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

    int r1 = 0, r2 = 0;
    if (i - 1 >= 0 && s[i - 1] == t[x])
    {
        r1 = left(s, t, i - 1, x);
    }
    if (r1)
    {
        return 1;
    }
    if (i + 1 < s.length() && s[i + 1] == t[x])
    {
        r2 = right(s, t, i + 1, x + 1);
    }
    return (r1 || r2);
}

void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s, t;
        cin >> s >> t;

        int f = 0;
        int l = t.length();
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == t[0])
            {
                f = right(s, t, i, 1);
                if (f == 1)
                {
                    break;
                }
            }
        }
        if (f)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
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
