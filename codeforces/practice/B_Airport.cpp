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
    int n,m;
    cin>>n>>m;
    vector<int> v;
    for(int i =0;i<m;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    vector<int> b;
    b = v;

    int maxi = 0;
    int mini = 0;
    int passanger = n;
    while(passanger>0){
        sort(v.begin(),v.end(),greater<int>());
        if(v[0]==0){
            v.erase(v.begin());
        }
        maxi += v[0];
        v[0]--;
        passanger--;
    }
    int p = n;
    while(p>0){
        sort(b.begin(),b.end());
        if(b[0]==0){
            b.erase(b.begin());
        }
        mini += b[0];
        b[0]--;
        p--;
    }
    cout<<maxi<<" "<<mini;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();
    return 0;
}
