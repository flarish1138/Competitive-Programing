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

vector<int> first, second, third;
void solve()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int a;
        scanf("%d", &a);
        if (a == 0)
            third.push_back(a);
        if (a > 0)
            second.push_back(a);
        if (a < 0)
            first.push_back(a);
    }
    if (second.size() == 0)
    {
        for (int i = 0; i < 2; i++)
            second.push_back(first.back()), first.pop_back();
    }
    if (first.size() % 2 == 0)
    {
        third.push_back(first.back());
        first.pop_back();
    }
    printf("%d", first.size());
    for (int i = 0; i < first.size(); i++)
    {
        printf(" %d", first[i]);
    }
    printf("\n%d", second.size());
    for (int i = 0; i < second.size(); i++)
    {
        printf(" %d", second[i]);
    }
    printf("\n%d", third.size());
    for (int i = 0; i < third.size(); i++)
    {
        printf(" %d", third[i]);
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
