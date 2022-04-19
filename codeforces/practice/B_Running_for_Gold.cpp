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
//         int n;
//         cin >> n;
//         int a[n][5];
//         for (int i = 0; i < n; i++)
//         {
//             for (int j = 0; j < 5; j++)
//             {
//                 cin >> a[i][j];
//             }
//         }
//         if (n == 1)
//         {
//             cout << 1 << nline;
//             continue;
//         }
//         int res = -1, max = 0;
//         for (int i = 1; i < n; i++)
//         {
//             int num = 0;
//             for (int j = 0; j < 5; j++)
//             {
//                 if (a[i][j] < a[max][j])
//                 {
//                     num++;
//                 }
//             }
//             if (num >= 3)
//             {
//                 max = i;
//             }
//         }
//         int i;
//         for ( i = 0; i < n; i++)
//         {
//             int num = 0;
//             if (i != max)
//             {
//                 for (int j = 0; j < 5; j++)
//                 {
//                     if (a[i][j] < a[max][j])
//                     {
//                         num++;
//                     }
//                 }
//                 if(num>=3){
//                     res= -1;
//                     break;
//                 }
//             }
//         }
//         if(i==n)
//         res = max +1;
//         cout<<res<<nline;
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

const int N = 1e5 + 5;
int n;
int a[N][6];

int comp(int i, int j)
{
    int cnt = 0;
    for (int k = 1; k <= 5; k++)
        cnt += (a[i][k] < a[j][k]);
    if (cnt >= 3)
        return i;
    else
        return j;
}

void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= 5; j++)
                cin >> a[i][j];
        }
        if (n == 1)
        {
            cout << 1 << nline;
            continue;
        }
        int candidate = 1;
        for (int i = 2; i <= n; i++)
        {
            candidate = comp(candidate, i);
        }
        int flag = 1;
        for (int i = 1; i <= n; i++)
        {
            if (i == candidate)
                continue;
            if (comp(i, candidate) != candidate)
            {
                flag = 0;
            }
        }
            if (!flag)
                cout << -1 << nline;
            else
                cout << candidate << nline;
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();
    return 0;
}
