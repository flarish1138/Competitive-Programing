// #include <bits/stdc++.h>

// using namespace std;

// #define MOD 1000000007
// #define MOD1 998244353
// #define INF 1e18
// #define rep(i, a, b) for (i = a; i < b; ++i)
// #define repr(i, a, b) for (i = a; i >= b; --i)
// #define nline "\n"

// typedef long long ll;
// typedef unsigned long long ull;
// typedef long double lld;

// //1.DP se soch
// //2.DP se soch
// //3.DP se soch
// //graph, gcd, BS, seive
// //if NOTA,then
// //brute force hi optimal h

// void solve()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         ll n;
//         cin >> n;
//     int i, count = 0;
//         while (n > 0)
//         {

//             int temp = n, m = 0, p = 1;
//             while (temp)
//             {
//                 int rem = temp % 10;
//                 temp = temp / 10;

//                 if (rem != 0)
//                     m += p;

//                 p *= 10;
//             }
//             // cout << m << " ";
//             count++;

//             n = n - m;
//         }
//         cout<<count<<endl;
//     }
// }

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     solve();
//     return 0;
// }

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
    while (t--)
    {
         string s;
        cin >> s;
        cout << *max_element(s.begin(), s.end()) << "\n";
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
