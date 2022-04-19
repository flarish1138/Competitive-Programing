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

// void solve()
// {
//     int n;
//     cin >> n;
//     int a[n], b[n];

//     rep(i, 0, n) cin >> a[i] >> b[i];
//     int negative = 0, positive = 0;

//     rep(i, 0, n)
//     {
//         if (a[i] < 0)
//             negative++;
//         else if (a[i] >= 0)
//             positive++;
//     }
//     if(negative == 0){
//         cout<<
//     }
// }
void solve
{
    int n;
    cin >> n;
    vector<pair<int, int>> v;
    vector<pair<int, int>> v2;
    rep(i, 0, n)
    {
        int x, y;
        cin >> x >> y;
        if (x < 0)
            v2.push_back(make_pair(x, y));
        else
            v.push_back(make_pair(x, y));
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
