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
    int count = 0;
    if (n <3)
    {
        cout << 1 << endl;
        cout << 1 << endl;
        return;
    }
     if (n == 3)
    {
        cout << 2 << endl;
        cout << '1' << " " << '3' << endl;
        return;
    }
    else if (n == 4)
    {
        cout << 4 << endl;
        cout << '2' << " " << '4' << " " << '1' << " " << '3' << endl;
        return;
    }
        cout << n << endl;

        for (int i =n; i >= 1; i -= 2)
        {
            cout << i << " ";
        }
    if (n % 2 == 0)
    {
        for (int i = n; i >=1; i -= 2)
        {
            cout << i-1 << " ";
        }
    }


    else  if (n % 2 == 1)
    {
       for (int i = n-1; i >=2; i -= 2)
        {
            cout << i << " ";
        } 
    }

    //     else
    //     {
    //         cout << n << endl;

    //         for (int i = 1; i <= n; i += 2)
    //         {
    //             cout << i << " ";
    //             count++;
    //         }
    //         int k = 1;
    //         while (count < n - 1)
    //         {
    //             // for(int i = 1;i<=n;i+=2){
    //             cout << k + 1 << " ";
    //             k += 2;
    //         }
    //     }
    // }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();
    return 0;
}
