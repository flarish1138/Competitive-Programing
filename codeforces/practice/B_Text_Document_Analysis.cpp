#include <bits/stdc++.h>
#define ll long long int
#define rep(i, a, b) for (i = a; i < b; ++i)
#define repr(i, a, b) for (i = a; i >= b; --i)
#define tst()   \
    int ttt;    \
    cin >> ttt; \
    for (int test = 1; test <= ttt; ++test)

using namespace std;

//1.DP se soch
//2.DP se soch
//3.DP se soch
//graph, gcd, BS, seive
//if NOTA,then
//brute force hi optimal h

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);

    int n;
    cin >> n;
    string a;
    cin >> a;
    int i;
    int mx = INT_MIN;
    int counter = 0;
    int counter1 = 0;
    int ans = 0;

    rep(i, 0, n)
    {
        if (a[i] == '_' && a[i]!='(')
        {
            mx = max(mx, counter);
            counter = 0;
            continue;
        }
        else
            counter++;
    }
    cout << mx;
    // rep(i, 0, n)
    // {
        
    //     if (a[i] == '(')
    //     {
    //         ans++;
    //         if(a[i]=='_'&& (a[i+1]!='_' || a[i+1]!=')'))
    //         {
    //             ans++;
    //             continue;
    //         }
    //         else
    //         {
    //             continue;
    //         }
    //     }
    //     else if(a[i]==')'){

    //     }
    // }
    return 0;
}