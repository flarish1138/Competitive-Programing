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
     int arr[2000];
    int j =1;
    for (int i = 1; i <= 2000; i++)
    {
        if (i % 3 != 0 and i % 10 != 3)
        {
           arr[j]=i;
           j++;
        }
        else continue;
    }
    int t;
    cin >> t;
    while (t--)
    {
        int k;
        cin >> k;
        cout<<arr[k]<<endl;
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
