// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     int count1 = 0;
//     int count0 = 0;

//     while (t--)
//     {
//     string s;
//         cin >> s;
//         int n = s.length();
//         for (int i = 0; i < n; i++)
//         {
//             if (s[i] == '0')
//                 count0++;
//             else
//                 count1++;
//         }
//         int mn = min(count0, count1);
//         if (mn % 2)
//             cout << "DA" << endl;
//         else
//             cout << "NET" << endl;
//     }
//     return 0;
// }
// Problem : B. 01 Game
// Contest : Codeforces - Educational Codeforces Round 90 (Rated for Div. 2)
// URL : https://codeforces.com/contest/1373/problem/B
// Memory Limit : 256.000000 MB
// Time Limit : 1000.000000 milisec

#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define F first
#define S second
#define mp make_pair
#define MOD 1000000007
#define vi vector<int>
#define vll vector<ll>
#define pll pair<ll, ll>
#define pii pair<int, int>
#define all(p) p.begin(), p.end()
#define mid(s, e) (s + (e - s) / 2)
#define eb emplace_back
#define ull unsigned long long
#define bug(x) cout << "  [ " #x << " = " << x << " ]" << endl;
#define KAMEHAMEHA ios_base::sync_with_stdio(0);
#define RASENGAN                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
using namespace std;
void solve()
{
    string s;
    cin >> s;
    int zero = 0, one = 0;
    for (auto i : s)
    {
        if (i == '0')
            zero++;
        else
            one++;
    }
    int ans = min(zero, one);
    if (ans % 2)
        cout << "DA" << endl;
    else
        cout << "NET" << endl;
}
int main()
{
    KAMEHAMEHA
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
